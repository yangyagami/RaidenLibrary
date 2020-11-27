#ifndef BUFFER_H
#define BUFFER_H

#include "glad/glad.h"

void Raiden_Buffer_bindBuffer(GLenum type, unsigned int buffer);
unsigned int Raiden_Buffer_createBuffer(GLenum type, GLsizeiptr size, const void *data); 

#endif
