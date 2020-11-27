#include "Buffer.h"
#include <stdlib.h>

unsigned int Raiden_Buffer_createBuffer(GLenum type, GLsizeiptr size, const void *data) {
	unsigned int id;
	glGenBuffers(1, &id);
	Raiden_Buffer_bindBuffer(type, id);
	if (data != NULL)
		glBufferData(type, size, data, GL_STATIC_DRAW);  
	else
		glBufferData(type, size, data, GL_DYNAMIC_DRAW);  

	return id;
}

void Raiden_Buffer_bindBuffer(GLenum type, unsigned int buffer) {
	glBindBuffer(type, buffer);
}
