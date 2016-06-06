#pragma once

#pragma once
#include "Pixel.h"
#include "Vector_3D.h"
#include <vector>

using namespace std;

typedef vector<vector<Pixel*>> Pixels_Pointer_2D_Array;

class Photo {

public:
	

	Photo();
	Photo(int _width_px_num,int _height_px_num, double _pixel_size);
	~Photo();
	int get_width_px_num();
	int get_height_px_num();
	int get_pixel_size();
	Pixels_Pointer_2D_Array get_pixel_ptr_array();
	Vector_3D get_pixel_location(int _h,int _w);
	void set_pixel_Complex_E_field(int _h,int _w,Complex_d _Complex_E_field);
	void calculate_intensity();

private:
	int width_px_num;
	int height_px_num;
	double pixel_size; // in meter : 1px = a(meter) * a(meter)
	//Pixels_2D_Array
	
	Pixels_Pointer_2D_Array pixel_ptr_array;

	
	

};