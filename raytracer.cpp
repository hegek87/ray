#include "raytracer.hpp"

const int width(500), height(500);
Sphere obj(Color(0xFF0000), Vector3d(width/2,height/2, 250), 290);
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
	Vector3d cam(-45, 250,250);
	for(int i = 0; i < width; ++i){
		for(int j = 0; j < height; ++j){
			Vector3d dir(-cam.getX(), i-cam.getY(), j-cam.getZ());
			bmp.setPixel(i,j, w.traceRay(Ray(cam, dir.unitVec())));
		}
	}
	bmp.createBMP((char *)"RT.bmp");
	return 0;
}
