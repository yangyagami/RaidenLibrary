#ifndef MATRIX_H
#define MATRIX_H

#include "Vec.h"

typedef struct {
	float data[4][4];
}Matrix4f;

Matrix4f Raiden_Matrix_createMatrix4f(float n);
Matrix4f Raiden_Matrix_createScale(Vec2 *size);
Matrix4f Raiden_Matrix_createTranslate(Vec2 *pos);
Matrix4f Raiden_Matrix_createOrtho(float left, float right, float bottom, float top, float zNear, float zFar);
Matrix4f Raiden_Matrix_times(Matrix4f *a, Matrix4f *b);
Vec4 Raiden_Matrix_timesVec4(Matrix4f *a, Vec4 *b);

#endif
