#pragma once
#include "Photo.h"
#include <vector>
#include "Intensity_Matrix.h"
#include <iostream>
#include <fstream>




class Image_generator {
public:
	Image_generator();
	~Image_generator();

	void load_intensity_matrix(Intensity_Matrix _intensity_matrix);
	void normalize_image_intensity_matrix();
	void write_txt_255(string filename);
	void write_txt_0_1(string filename);

private: 
	Intensity_Matrix image_intensity_matrix;


};