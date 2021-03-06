#ifndef RAYTRACER_H
#define RAYTRACER_H

#include "../object/sphere.hpp"
#include "../object/intersection.hpp"
#include "../bitmap/bitmap.hpp"
#include "../color/color.h"
#include "scene.hpp"
#include "ray.h"



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
