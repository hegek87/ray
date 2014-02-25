#ifndef #SCENE_H
#define #SCENE_H
#include "shape.hpp"
#include "vector3d.h"

struct Scene{
	Object *sceneObj;
	Vector3d *lights;
	
	/* 
	* Empty scene doesn't make sense, so we do not specify a default
	* constructor.
	*/
	Scene(Object *objects, Vector3d *lights) : 
		sceneObj(objects), 
		lights(lights){}
	
	/* Objects and lights are pointers and so we must delete them */
	~Scene();
};
