
#include "stdafx.h"
#include "Laser.h"
#include "Vector_3D.h"
#include "Object_Point.h"
#include "Pixel.h"
#include "Photo.h"
#include "Complex.h"
#include "E_field.h"
#include "E_field_ball.h"
#include "E_field_plane.h"
#include <iostream>
#include <vector>
#include "Interference_Manager.h"
#include "Image_generator.h"



int main() {

	Laser laser = Laser(wave_vector, amplitude, frequence);

	Photo photo = Photo(width_pixel, height_pixel, pixel_size);  //measured in meter

	Points_Ptr_Set points_ptr_set;
	points_ptr_set.load_from_file(filename);

	Interference_Manager interference_manager = Interference_Manager();
	interference_manager.superimpose(photo, points_ptr_set, laser);

	Image_generator image_generator = Image_generator();
	image_generator.load_intensity_matrix(photo.get_intensity_matrix());
	image_generator.write(output_filename);

	return 0;

}