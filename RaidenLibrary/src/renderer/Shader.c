#include "Shader.h"
#include <stdlib.h>

unsigned int Raiden_Shader_createProgram(const char *vertexShaderSrc, const char *fragmentShaderSrc) {
	unsigned int program = glCreateProgram();
	unsigned int vertexShader = Raiden_Shader_createShader(vertexShaderSrc, GL_VERTEX_SHADER);
	unsigned int fragmentShader = Raiden_Shader_createShader(fragmentShaderSrc, GL_FRAGMENT_SHADER);
	glAttachShader(program, vertexShader);
	glAttachShader(program, fragmentShader);
	glLinkProgram(program);
	glUseProgram(program);

	return program;
}

unsigned int Raiden_Shader_createShader(const char *src, GLenum shaderType) {
	unsigned int shader = glCreateShader(shaderType);
	glShaderSource(shader, 1, &src, NULL);
	glCompileShader(shader);

	return shader;
}

void Raiden_Shader_setUniformMat4f(unsigned int program, const char *name, const float *data) {
	glUniformMatrix4fv(glGetUniformLocation(program, name), 1, GL_TRUE, data);
}
