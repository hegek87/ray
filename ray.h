#ifndef RAY_H
#define RAY_H
#include "../vector3d/vector3d.h"

struct Ray{
	Vector3d position;
	Vector3d direction;
	
	Ray(Vector3d pos, Vector3d dir) : position(pos), direction(dir) {}
};
#endif
