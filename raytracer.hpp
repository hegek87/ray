#ifndef RAYTRACER_H
#define RAYTRACER_H

#include "../object/shape.hpp"
#include "../object/sphere.hpp"
#include "../object/intersection.hpp"
#include "../bitmap/bitmap.hpp"
#include "../color/color.h"
#include "ray.h"

struct Scene{
	//Shape sh;
	//Scene(Shape sh) : sh(sh) {}
};

class World{
	private:
		//Scene sc;
		Vector3d cam;
	public:
		World() : cam(0,0,0) {}
		//World(Scene sc, Vector3d cam): sc(sc), cam(cam) {}
		Color traceRay(Ray);
};

#endif
