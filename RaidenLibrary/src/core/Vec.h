#ifndef VEC_H
#define VEC_H

typedef struct {
	float x;
	float y;
	float z;
	float w;
}Vec4;

typedef struct {
	float x;
	float y;
}Vec2;

Vec4 Raiden_Vec_createVec4(float x, float y, float z, float w);

#endif
