#include "Renderer.h"
#include "Vec.h"
#include "glad/glad.h"
#include <stdlib.h>
#include "Shader.h"
#include "Matrix.h"
#include "Window.h"

typedef struct {
	Vec4 position;	
	Vec4 color;
}Vertex;

static Vertex *verticesBase = NULL;
static Vertex *verticesPtr = NULL;
static const unsigned int maxQuads = 10000;
static const unsigned int maxVertices = maxQuads * 4;
static const unsigned int maxIndices = maxQuads * 6;
static unsigned int program = 0;
static unsigned int quadsCount = 0;
static Vec4 position[4];

void Raiden_Renderer_init() {
	verticesBase = (Vertex *)malloc(maxVertices * sizeof(Vertex));	
	verticesPtr = verticesBase;
	unsigned int *indices = (unsigned int *)malloc(maxIndices * sizeof(unsigned int));

	const char *vertexShaderSrc = "#version 330 core\n"
								  "layout (location = 0) in vec4 aPos;\n"
								  "layout (location = 1) in vec4 aColor;\n"
								  "out vec4 mColor;\n"
								  "uniform mat4 proj;\n"
								  "void main() {\n"
								  "    gl_Position = proj * aPos;\n"
								  "    mColor = aColor;\n"
								  "}\n";

	const char *fragmentShaderSrc = "#version 330 core\n"
								    "in vec4 mColor;\n"
									"out vec4 fragColor;\n"
								    "void main() {\n"
								    "    fragColor = mColor;\n"
								    "}\n";


	unsigned int offset = 0;

	for (int i = 0; i < maxIndices; i += 6) {
		indices[i + 0] = offset + 0;
		indices[i + 1] = offset + 1;
		indices[i + 2] = offset + 2;

		indices[i + 3] = offset + 2;
		indices[i + 4] = offset + 3;
		indices[i + 5] = offset + 0;

		offset += 4;
	}

	unsigned int vao, vbo, ibo;
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);

	glGenBuffers(1, &vbo);
	glBindBuffer(GL_ARRAY_BUFFER, vbo);
	glBufferData(GL_ARRAY_BUFFER, sizeof(Vertex) * maxVertices, NULL, GL_DYNAMIC_DRAW);

	glGenBuffers(1, &ibo);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ibo);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(unsigned int) * maxIndices, indices, GL_STATIC_DRAW);

	glVertexAttribPointer(0, 4, GL_FLOAT, GL_FALSE, 8 * sizeof(float), NULL);
	glEnableVertexAttribArray(0);
	
	glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void *)(4 * sizeof(float)));
	glEnableVertexAttribArray(1);

	program = Raiden_Shader_createProgram(vertexShaderSrc, fragmentShaderSrc);

	position[0] = Raiden_Vec_createVec4(0.0f, 0.0f, 0.0f, 1.0f);
	position[1] = Raiden_Vec_createVec4(1.0f, 0.0f, 0.0f, 1.0f);
	position[2] = Raiden_Vec_createVec4(1.0f, 1.0f, 0.0f, 1.0f);
	position[3] = Raiden_Vec_createVec4(0.0f, 1.0f, 0.0f, 1.0f);

	free(indices);
}

void Raiden_Renderer_begin() {
	Raiden_Renderer_clear();

	Matrix4f proj = Raiden_Matrix_createOrtho(0.0f, 800.0f, 0.0f, 600.0f, -1.0f, 1.0f);
	Raiden_Shader_setUniformMat4f(program, "proj", &proj.data[0][0]);

	Raiden_Renderer_startBatch();
}

void Raiden_Renderer_end() {
	Raiden_Renderer_flush();

	Raiden_Window_update();
}

void Raiden_Renderer_startBatch() {
	verticesPtr = verticesBase;
	quadsCount = 0;
}

void Raiden_Renderer_reBatch() {
	Raiden_Renderer_flush();
	Raiden_Renderer_startBatch();
}

void Raiden_Renderer_flush() {
	if (quadsCount != 0) {
		unsigned int dataSize = verticesPtr - verticesBase;
		glBufferSubData(GL_ARRAY_BUFFER, 0, sizeof(Vertex) * dataSize, verticesBase);
		glDrawElements(GL_TRIANGLES, quadsCount * 6, GL_UNSIGNED_INT, NULL);
	}
}

void Raiden_Renderer_drawRect(Vec2 *pos, Vec2 *size, Vec4 *color) {
	if (quadsCount >= maxQuads) {
		Raiden_Renderer_reBatch();
	}

	Matrix4f scale = Raiden_Matrix_createScale(size);
	Matrix4f translate = Raiden_Matrix_createTranslate(pos);
	Matrix4f transform = Raiden_Matrix_times(&translate, &scale);

	for (int i = 0; i < 4; i++) {
		verticesPtr->position = Raiden_Matrix_timesVec4(&transform, &position[i]);
		verticesPtr->color = Raiden_Vec_createVec4(color->x, color->y, color->z, color->w);
		verticesPtr++;
	}
	quadsCount++;
}

void Raiden_Renderer_shutdown() {
	free(verticesBase);
	verticesPtr = NULL;
}

void Raiden_Renderer_clearColor(Vec4 *color) {
	glClearColor(color->x, color->y, color->z, color->w);
}

void Raiden_Renderer_clear() {
	glClear(GL_COLOR_BUFFER_BIT);
}
