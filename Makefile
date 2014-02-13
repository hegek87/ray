CC = g++
CFLAGS = -c -g -Wall -o
OBJECTS = 	bin/shape.o			\
		bin/sphere.o		\
		bin/bitmap.o		\
		bin/color.o			\
		bin/polynomial.o		\
		bin/raytracer.o		\
		bin/vector3d.o
		
all: raytracer

raytracer: $(OBJECTS)
	$(CC) -o bin/raytracer $(OBJECTS)

bin/raytracer.o: raytracer.cpp
	$(CC) $(CFLAGS) bin/raytracer.o raytracer.cpp
	
bin/shape.o: 	../object/shape.cpp
	$(CC) $(CFLAGS) bin/shape.o ../object/shape.cpp
	
bin/sphere.o:	../object/sphere.cpp
	$(CC) $(CFLAGS) bin/sphere.o ../object/sphere.cpp

bin/color.o: ../color/color.cpp
	$(CC) $(CFLAGS) bin/color.o ../color/color.cpp
	
bin/bitmap.o:	../bitmap/bitmap.cpp
	$(CC) $(CFLAGS) bin/bitmap.o ../bitmap/bitmap.cpp

bin/polynomial.o:	../polynomial/polynomial.cpp
	$(CC) $(CFLAGS) bin/polynomial.o ../polynomial/polynomial.cpp

bin/vector3d.o: ../vector3d/vector3d.cpp
	$(CC) $(CFLAGS) bin/vector3d.o ../vector3d/vector3d.cpp
