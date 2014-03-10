#ifndef SCENE_H
#define SCENE_H
#include "shape.hpp"
#include "vector3d.hpp"

struct Scene{
	private:
		Shape *sceneObj;
		Vector3d *lights;
		
	public:
		/* 
		* Empty scene doesn't make sense, so we do not specify a default
		* constructor.
		*/
		Scene(Shape *objects, Vector3d *lights) : 
			sceneObj(objects), 
			lights(lights){}
	
		/* Objects and lights are pointers and so we must delete them */
		~Scene();
		
		Shape *getSceneObj(){ return sceneObj; }
		Vector3d *getLights(){ return lights; }
};
#endif
