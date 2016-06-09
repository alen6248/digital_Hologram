#include "stdafx.h"
#include "Image_generator.h"

Image_generator::Image_generator()
{
}



Image_generator::~Image_generator()
{
}

void Image_generator::load_intensity_matrix(Intensity_Matrix _intensity_matrix)
{
	int height_px_num = _intensity_matrix.size();
	int width_px_num = _intensity_matrix[0].size();

	image_intensity_matrix.resize(height_px_num);
	for (int h = 0; h < height_px_num; h++) {
		image_intensity_matrix[h].resize(width_px_num);
	}

	double _max = 0.0;
	for (int h = 0; h < height_px_num; h++) {
		for (int w = 0; w < width_px_num; w++) {
			image_intensity_matrix[h][w] =
				_intensity_matrix[h][w];
		}
	}

}

void Image_generator::normalize_image_intensity_matrix()
{
	int height_px_num = image_intensity_matrix.size();
	int width_px_num = image_intensity_matrix[0].size();

	double _max = 0;
	//find max
	for (int h = 0; h < height_px_num; h++) {
		for (int w = 0; w < width_px_num; w++) {
			if (_max < image_intensity_matrix[h][w]) {
				_max = image_intensity_matrix[h][w];
			}
		}
	}

	double normalize_factor = 255.0 / _max;
	for (int h = 0; h < height_px_num; h++) {
		for (int w = 0; w < width_px_num; w++) {
			image_intensity_matrix[h][w] = image_intensity_matrix[h][w] * normalize_factor;
		}
	}
}



void Image_generator::write_txt_255(string filename)
{
	ofstream myfile;
	myfile.open(filename.c_str());

	int height_px_num = image_intensity_matrix.size();
	int width_px_num = image_intensity_matrix[0].size();

	for (int h = 0; h < height_px_num; h++) {
		for (int w = 0; w < width_px_num; w++) {
			myfile << image_intensity_matrix[h][w]<<'\n';
		}
	}
	myfile.close();



}

void Image_generator::write_txt_0_1(string filename)
{
	ofstream myfile;
	myfile.open(filename.c_str());

	int height_px_num = image_intensity_matrix.size();
	int width_px_num = image_intensity_matrix[0].size();

	for (int h = 0; h < height_px_num; h++) {
		for (int w = 0; w < width_px_num; w++) {
			myfile << image_intensity_matrix[h][w]/255.0 << '\n';
		}
	}
	myfile.close();



}




