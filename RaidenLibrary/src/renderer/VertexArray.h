#ifndef VERTEX_ARRAY_H
#define VERTEX_ARRAY_H

#include "glad/glad.h"

unsigned int Raiden_VertexArray_createVertexArray();
void Raiden_VertexArray_bindVertexArray(unsigned int vao);
void Raiden_VertexArray_setLayout(unsigned int index, unsigned int vecN, GLsizei size, const void *data) ;

#endif

