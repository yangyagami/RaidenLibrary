#include "Vec.h"

Vec4 Raiden_Vec_createVec4(float x, float y, float z, float w) {
	Vec4 v;
	v.x = x;
	v.y = y;
	v.z = z;
	v.w = w;

	return v;
}
