#include "raytracer.hpp"

const int width(500), height(500);
Sphere obj(Color(0xFF0000), Vector3d(50,0,0), 75);
Color World::traceRay(Ray r){
	Color c(0x000000);
	// Missed
	if(!obj.getIntersection(r).time){
		return c;
	}
	// Hit
	return c+obj.getColor();
	
}

int main(void){
	Bitmap bmp(width, height);
	World w;
	Vector3d cam(-45, 0, 0);
	for(int i = -(width/2); i < width/2; ++i){
		for(int j = -(height/2); j < height/2; ++j){
			Vector3d dir(-cam.getX(), i-cam.getY(), j-cam.getZ());
			bmp.setPixel(i+(width/2),j+(height/2), w.traceRay(Ray(cam, dir.unitVec())));
		}
	}
	bmp.createBMP((char *)"RT.bmp");
	return 0;
}
