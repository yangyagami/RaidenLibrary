#ifndef SHADER_H
#define SHADER_H

#include "glad/glad.h"

unsigned int Raiden_Shader_createProgram(const char *vertexShaderSrc, const char *fragmentShaderSrc);
unsigned int Raiden_Shader_createShader(const char *src, GLenum shaderType);
void Raiden_Shader_setUniformMat4f(unsigned int program, const char *name, const float *data);

#endif
