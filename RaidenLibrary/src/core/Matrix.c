#include "Matrix.h"

Matrix4f Raiden_Matrix_createMatrix4f(float n) {
	Matrix4f matrix = { 
		{
			{n, 0.0f, 0.0f, 0.0f},
			{0.0f, n, 0.0f, 0.0f},
			{0.0f, 0.0f, n, 0.0f},
			{0.0f, 0.0f, 0.0f, n},
		}
	};

	return matrix;
}

Matrix4f Raiden_Matrix_createOrtho(float left, float right, float bottom, float top, float zNear, float zFar) {
	Matrix4f matrix = { 
		{
			{2 / (right - left), 0.0f, 0.0f, -(left + right) / (right - left)},
			{0.0f, 2 / (top - bottom), 0.0f, -(bottom + top) / (top - bottom)},
			{0.0f, 0.0f, 2 / (zNear - zFar), -(zFar + zNear) / (zNear - zFar)},
			{0.0f, 0.0f, 0.0f, 1.0f},
		}
	};

	return matrix;
}

Matrix4f Raiden_Matrix_times(Matrix4f *a, Matrix4f *b) {
	Matrix4f mat = Raiden_Matrix_createMatrix4f(0);
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			for (int m = 0; m < 4; m++) {
				mat.data[i][j] += a->data[i][m] * b->data[m][j]; 	
			}
		}
	}
	return mat;
}

Vec4 Raiden_Matrix_timesVec4(Matrix4f *a, Vec4 *b) {
	Vec4 v;	
	v.x = a->data[0][0] * b->x + a->data[0][1] * b->y + a->data[0][2] * b->z + a->data[0][3] * b->w;
	v.y = a->data[1][0] * b->x + a->data[1][1] * b->y + a->data[1][2] * b->z + a->data[1][3] * b->w;
	v.z = a->data[2][0] * b->x + a->data[2][1] * b->y + a->data[2][2] * b->z + a->data[2][3] * b->w;
	v.w = a->data[3][0] * b->x + a->data[3][1] * b->y + a->data[3][2] * b->z + a->data[3][3] * b->w;
	return v;
}

Matrix4f Raiden_Matrix_createScale(Vec2 *size) {
	Matrix4f matrix = { 
		{
			{size->x, 0.0f, 0.0f, 0.0f},
			{0.0f, size->y, 0.0f, 0.0f},
			{0.0f, 0.0f, 1.0f, 0.0f},
			{0.0f, 0.0f, 0.0f, 1.0f},
		}
	};

	return matrix;
}

Matrix4f Raiden_Matrix_createTranslate(Vec2 *pos) {
	Matrix4f matrix = { 
		{
			{1.0f, 0.0f, 0.0f, pos->x},
			{0.0f, 1.0f, 0.0f, pos->y},
			{0.0f, 0.0f, 1.0f, 0.0f},
			{0.0f, 0.0f, 0.0f, 1.0f},
		}
	};

	return matrix;
}
