#pragma once

#include "Pixel.h"
#include <vector>

using namespace std;

class Photo {

public:
	Photo();
	Photo(int _width_px_num,int _height_px_num, double _pixel_size);
	~Photo();
	int get_width_px_num();
	int get_height_px_num();
	int get_pixel_size();

private:
	int width_px_num;
	int height_px_num;
	double pixel_size; // in meter : 1px = a(meter) * a(meter)
	//Pixels_2D_Array
	typedef vector<vector<Pixel*>> Pixels_Pointer_2D_Array;
	Pixels_Pointer_2D_Array pixel_ptr_array;

	
	

};