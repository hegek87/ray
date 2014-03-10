#include "scene.hpp"

Scene::~Scene(){
	delete sceneObj;
	delete lights;
}
