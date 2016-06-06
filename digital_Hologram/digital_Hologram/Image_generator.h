#pragma once
#include "Photo.h"
#include <vector>
#include "Intensity_Matrix.h"




class Image_generator {
public:
	Image_generator();
	~Image_generator();

	void load_intensity_matrix(Intensity_Matrix _intensity_matrix);
	void normalize_image_intensity_matrix();

private: 
	Intensity_Matrix image_intensity_matrix;


};