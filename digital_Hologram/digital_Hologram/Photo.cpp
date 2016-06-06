#include "stdafx.h"
#include "Photo.h"

Photo::Photo():width_px_num(0),height_px_num(0),pixel_size(0)
{
}

Photo::Photo(int _width, int _height, double _pixel_size)
	: width_px_num(_width), height_px_num(_height),pixel_size(_pixel_size)
{
	//resize pixel_array[height][width]
	pixel_ptr_array.resize(height_px_num);
	for (int h = 0; h < height_px_num; h++) {
		pixel_ptr_array[h].resize(width_px_num);
		for (int w = 0; w < width_px_num; w++) {
			Vector_3D _position = Vector_3D(w*pixel_size, h*pixel_size, 0);
			pixel_ptr_array[h][w] = new Pixel(w,h,_position);
		}
	}
}

Photo::~Photo()
{
	
}

int Photo::get_width_px_num()
{
	return width_px_num;
}

int Photo::get_height_px_num()
{
	return height_px_num;
}

int Photo::get_pixel_size()
{
	return pixel_size;
}

Pixels_Pointer_2D_Array Photo::get_pixel_ptr_array()
{
	return pixel_ptr_array;
}

Vector_3D Photo::get_pixel_location(int _h, int _w)
{
	return pixel_ptr_array[_h][_w]->get_location();
}

void Photo::set_pixel_Complex_E_field(int _h, int _w, Complex_d _Complex_E_field)
{
	pixel_ptr_array[_h][_w]->set_Complex_E_field(_Complex_E_field);
}



