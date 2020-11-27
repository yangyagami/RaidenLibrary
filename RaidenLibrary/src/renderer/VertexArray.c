#include "VertexArray.h"

unsigned int Raiden_VertexArray_createVertexArray() {
	unsigned int id;
	glGenVertexArrays(1, &id);
	Raiden_VertexArray_bindVertexArray(id);
	return id;
}

void Raiden_VertexArray_bindVertexArray(unsigned int vao) {
	glBindVertexArray(vao);
}

void Raiden_VertexArray_setLayout(unsigned int index, unsigned int vecN, GLsizei size, const void *data) {
	glVertexAttribPointer(index, vecN, GL_FLOAT, GL_FALSE, size, data); 	
	glEnableVertexAttribArray(index);
}
