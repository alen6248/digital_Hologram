#pragma once

#include "Pixel.h"
#include <vector>

using namespace std;

class Photo {

public:
	Photo();
	Photo(int _width,int _height, double _pixel_size);
	~Photo();


private:
	int width;
	int height;
	double pixel_size; // in meter : 1px = a(meter) * a(meter)
	//Pixels_2D_Array
	typedef vector<vector<Pixel*>> Pixels_Pointer_2D_Array;
	Pixels_Pointer_2D_Array pixel_ptr_array;

	
	

};