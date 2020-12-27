#include "Renderer.h"
#include "Vec.h"
#include "glad/glad.h"
#include "Buffer.h"
#include "VertexArray.h"
#include <stdlib.h>
#include "Shader.h"
#include "Matrix.h"
#include "Window.h"

typedef struct {
	Vec4 position;	
	Vec4 color;
	Vec2 texCoord;
	float texIndex;
}Vertex;

static Vertex *verticesBase = NULL;
static Vertex *verticesPtr = NULL;
static const unsigned int maxQuads = 10000;
static const unsigned int maxVertices = maxQuads * 4;
static const unsigned int maxIndices = maxQuads * 6;
static unsigned int program = 0;
static unsigned int quadsCount = 0;
static Vec4 position[4];

static const int maxTextureIndex = 10;
static int textureSlotsIndex = 1;
static Texture *textureSlots[10];
int textureIndex = 0;
int location[10];
Texture defaultTexture;

void Raiden_Renderer_init() {
	verticesBase = (Vertex *)malloc(maxVertices * sizeof(Vertex));	
	verticesPtr = verticesBase;
	unsigned int *indices = (unsigned int *)malloc(maxIndices * sizeof(unsigned int));

	const char *vertexShaderSrc = "#version 330 core\n"
								  "layout (location = 0) in vec4 aPos;\n"
								  "layout (location = 1) in vec4 aColor;\n"
								  "layout (location = 2) in vec2 aTexCoord;\n"
								  "layout (location = 3) in float aTexIndex;\n"
								  "out vec4 mColor;\n"
								  "out vec2 mTexCoord;\n"
								  "uniform mat4 proj;\n"
								  "out float mTexIndex;\n"
								  "void main() {\n"
								  "    gl_Position = proj * aPos;\n"
								  "    mColor = aColor;\n"
								  "    mTexCoord = aTexCoord;\n"
								  "	   mTexIndex = aTexIndex;\n"
								  "}\n";

	const char *fragmentShaderSrc = "#version 330 core\n"
								    "in vec4 mColor;\n"
									"in float mTexIndex;\n"
									"in vec2 mTexCoord;\n"
									"out vec4 fragColor;\n"
									"uniform sampler2D TEXTURE0;\n"
									"uniform sampler2D TEXTURE1;\n"
									"uniform sampler2D TEXTURE2;\n"
									"uniform sampler2D TEXTURE3;\n"
									"uniform sampler2D TEXTURE4;\n"
									"uniform sampler2D TEXTURE5;\n"
									"uniform sampler2D TEXTURE6;\n"
									"uniform sampler2D TEXTURE7;\n"
									"uniform sampler2D TEXTURE8;\n"
									"uniform sampler2D TEXTURE9;\n"
								    "void main() {\n"
									"    switch (int(mTexIndex)) {\n"
									"        case 0:\n"
								    "            fragColor = texture(TEXTURE0, mTexCoord) * mColor;\n"
								    "            break;\n"
									"        case 1:\n"
								    "            fragColor = texture(TEXTURE1, mTexCoord) * mColor;\n"
								    "            break;\n"
									"        case 2:\n"
								    "            fragColor = texture(TEXTURE2, mTexCoord) * mColor;\n"
								    "            break;\n"
									"        case 3:\n"
								    "            fragColor = texture(TEXTURE3, mTexCoord) * mColor;\n"
								    "            break;\n"
									"        case 4:\n"
								    "            fragColor = texture(TEXTURE4, mTexCoord) * mColor;\n"
								    "            break;\n"
									"        case 5:\n"
								    "            fragColor = texture(TEXTURE5, mTexCoord) * mColor;\n"
								    "            break;\n"
									"        case 6:\n"
								    "            fragColor = texture(TEXTURE6, mTexCoord) * mColor;\n"
								    "            break;\n"
									"        case 7:\n"
								    "            fragColor = texture(TEXTURE7, mTexCoord) * mColor;\n"
								    "            break;\n"
									"        case 8:\n"
								    "            fragColor = texture(TEXTURE8, mTexCoord) * mColor;\n"
								    "            break;\n"
									"        case 9:\n"
								    "            fragColor = texture(TEXTURE9, mTexCoord) * mColor;\n"
								    "            break;\n"
									"    }\n"
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
	vao = Raiden_VertexArray_createVertexArray();
	Raiden_VertexArray_bindVertexArray(vao);

	vbo = Raiden_Buffer_createBuffer(GL_ARRAY_BUFFER, sizeof(Vertex) * maxVertices, NULL);
	Raiden_Buffer_bindBuffer(GL_ARRAY_BUFFER, vbo);

	ibo = Raiden_Buffer_createBuffer(GL_ELEMENT_ARRAY_BUFFER, sizeof(unsigned int) * maxIndices, indices);
	Raiden_Buffer_bindBuffer(GL_ELEMENT_ARRAY_BUFFER, ibo);

	Raiden_VertexArray_setLayout(0, 4, sizeof(float) * 11, NULL);
	Raiden_VertexArray_setLayout(1, 4, sizeof(float) * 11, (void *)(sizeof(float) * 4));
	Raiden_VertexArray_setLayout(2, 2, sizeof(float) * 11, (void *)(sizeof(float) * 8));
	Raiden_VertexArray_setLayout(3, 1, sizeof(float) * 11, (void *)(sizeof(float) * 10));

	program = Raiden_Shader_createProgram(vertexShaderSrc, fragmentShaderSrc);

	position[0] = Raiden_Vec_createVec4(0.0f, 0.0f, 0.0f, 1.0f);
	position[1] = Raiden_Vec_createVec4(1.0f, 0.0f, 0.0f, 1.0f);
	position[2] = Raiden_Vec_createVec4(1.0f, 1.0f, 0.0f, 1.0f);
	position[3] = Raiden_Vec_createVec4(0.0f, 1.0f, 0.0f, 1.0f);

	free(indices);

	defaultTexture = Raiden_Texture_createDefaultTexture();

	textureSlots[0] = &defaultTexture;
	textureSlotsIndex = 1;

	location[0] = glGetUniformLocation(program, "TEXTURE0");
	location[1] = glGetUniformLocation(program, "TEXTURE1");
	location[2] = glGetUniformLocation(program, "TEXTURE2");
	location[3] = glGetUniformLocation(program, "TEXTURE3");
	location[4] = glGetUniformLocation(program, "TEXTURE4");
	location[5] = glGetUniformLocation(program, "TEXTURE5");
	location[6] = glGetUniformLocation(program, "TEXTURE6");
	location[7] = glGetUniformLocation(program, "TEXTURE7");
	location[8] = glGetUniformLocation(program, "TEXTURE8");
	location[9] = glGetUniformLocation(program, "TEXTURE9");
}

void Raiden_Renderer_begin() {
	Raiden_Renderer_clear();

	Matrix4f proj = Raiden_Matrix_createOrtho(0.0f, (float)getWinWidth(), 0.0f, (float)getWinHeight(), -1.0f, 1.0f);
	Raiden_Shader_setUniformMat4f(program, "proj", &proj.data[0][0]);

	Raiden_Renderer_startBatch();
}

void Raiden_Renderer_end() {
	Raiden_Renderer_flush();

	Raiden_Window_update();
}

void Raiden_Renderer_startBatch() {
	verticesPtr = verticesBase;
	textureSlotsIndex = 1;
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

		for (int i = 0; i < textureSlotsIndex; i++) {
			bindTexture(textureSlots[i], location[i], i);
		}

		glDrawElements(GL_TRIANGLES, quadsCount * 6, GL_UNSIGNED_INT, NULL);
	}
}

void Raiden_Renderer_drawRect(Vec2 *pos, Vec2 *size, Vec4 *color) {
	Raiden_Renderer_drawTexture(&defaultTexture, pos, size, color);
}

void Raiden_Renderer_shutdown() {
	free(verticesBase);
	verticesPtr = NULL;
}

void Raiden_Renderer_clearColor(Vec4 *color) {
	glClearColor(color->x, color->y, color->z, color->w);
}

void Raiden_Renderer_drawTexture(Texture *texture, Vec2 *pos, Vec2 *size, Vec4 *color) {
	if (quadsCount >= maxQuads) {
		Raiden_Renderer_reBatch();
	}

	Matrix4f scale = Raiden_Matrix_createScale(size);
	Matrix4f translate = Raiden_Matrix_createTranslate(pos);
	Matrix4f transform = Raiden_Matrix_times(&translate, &scale);

	float texIndex = -1.0f;
	Vec2 texCoord[4] = {
		{ 0.0f, 1.0f },
		{ 1.0f, 1.0f },
		{ 1.0f, 0.0f },
		{ 0.0f, 0.0f }
	};

	if (textureSlotsIndex >= maxTextureIndex) {
		Raiden_Renderer_reBatch();
	}

	for (int i = 0; i < maxTextureIndex; i++) {
		if (textureSlots[i] == texture && textureSlots[i] != NULL) {
			texIndex = (float)i;
			break;
		}
	}

	if (texIndex == -1.0f) {
		textureSlots[textureSlotsIndex] = texture;
		texIndex = (float)textureSlotsIndex;
		textureSlotsIndex++;
	}

	for (int i = 0; i < 4; i++) {
		verticesPtr->position = Raiden_Matrix_timesVec4(&transform, &position[i]);
		verticesPtr->color = Raiden_Vec_createVec4(color->x, color->y, color->z, color->w);
		verticesPtr->texCoord = texCoord[i];
		verticesPtr->texIndex = texIndex;
		verticesPtr++;
	}
	quadsCount++;
}

void Raiden_Renderer_clear() {
	glClear(GL_COLOR_BUFFER_BIT);
}
