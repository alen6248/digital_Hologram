#include "stdafx.h"
#include "Interference_Manager.h"
#include "Vector_3D.h"
#include <vector>


Interference_Manager::Interference_Manager()
{
}

Interference_Manager::~Interference_Manager()
{
}

void Interference_Manager::superimpose(Photo& photo,Points_Ptr_Set points_ptr_set, Laser& laser)
{

	for (int height_px = 0; height_px < photo.get_height_px_num(); height_px ++) {
		for (int width_px = 0; width_px < photo.get_width_px_num(); width_px++) {
			

			//Laser  在(0,0,0)處雷射的相位為0
			Vector_3D r_laser_to_photo = photo.get_pixel_location(height_px, width_px);
			Complex_d laser_Complex_E_field = laser.get_Complex_E_field(r_laser_to_photo, 0);
			
			//object points
			Complex_d points_total_Complex_E_field = 0;
			int points_num = points_ptr_set.size();
			std::vector<Complex_d> points_Complex_E_field; //container
			points_Complex_E_field.resize(points_num);  //resize

			for (int i = 0; i < points_num; i++) {
				Vector_3D r_laser_to_point
							= points_ptr_set[i]->get_position() - points_ptr_set[0]->get_position();
				Vector_3D r_point_to_photo
							=photo.get_pixel_location(height_px, width_px)-points_ptr_set[i]->get_position();
				

				points_Complex_E_field[i] = 
							points_ptr_set[i]->
								get_Complex_E_field(
													1, //U (amplitude)
													laser.get_k(),
													r_laser_to_point,
													laser.get_omega(),
													r_point_to_photo,
													0	//time
													);

				//sum up E_field
				points_total_Complex_E_field += points_total_Complex_E_field + points_Complex_E_field[i];

			}

			//laser + object_points
			Complex_d Complex_E_field_result_InThisPixel = points_total_Complex_E_field + laser_Complex_E_field;
			photo.set_pixel_Complex_E_field(height_px, width_px, Complex_E_field_result_InThisPixel);

						





		}
	}
	
	photo.calculate_intensity();
}
