#include "stdafx.h"
#include "Photo.h"

Photo::Photo():width(0),height(0),pixel_size(0)
{
}

Photo::Photo(int _width, int _height, double _pixel_size)
	:width(_width),height(_height),pixel_size(_pixel_size)
{
	//resize pixel_array[height][width]
	pixel_ptr_array.resize(height);
	for (int h = 0; h < height; h++) {
		pixel_ptr_array[h].resize(width);
		for (int w = 0; w < width; w++) {
			Vector_3D _position = Vector_3D(w*pixel_size, h*pixel_size, 0);
			pixel_ptr_array[h][w] = new Pixel(w,h,_position);
		}
	}
}

Photo::~Photo()
{
	
}


