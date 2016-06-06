

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


using namespace std;


int main()
{
	///*  Vector_3D test  */ 
	///*  OK  */
	//cout << "Vector_3D test" << endl;

	//Vector_3D vec1 = Vector_3D(1, 2, 3);
	//Vector_3D vec2 = Vector_3D(-1, -2, -3);
	//cout << "vec1*vec2="<<vec1*vec2 <<"="<<vec1.dot_product(vec2)<< endl;
	//cout << "vec1 norm=" << vec1.get_norm() << endl;
	//vec1.print();
	//Vector_3D vec3 = vec1 + vec2;
	//Vector_3D vec4 = vec1 - vec2;
	//vec3.print();
	//vec4.print();
	//cout << endl;

	
	///*  Complex_d  */
	///*  OK  */
	//Complex_d U = 1;
	//Complex_d exp_term1 = U*exp(1i*3.14159);
	//Complex_d exp_term2 = U*exp(1i*3.14159*0.5);
	//Complex_d exp_term3 = U*exp(1i*3.14159*0.25);
	//cout << exp_term1 << exp_term2 <<exp_term3<< endl;
	//cout << '\n';

	///*  E_field test  */
	///*  OK  */
	//  //plane
	//cout << "E_field test" << endl;
	//Vector_3D k = Vector_3D(1, 2, 3);
	//Vector_3D r = Vector_3D(10, 0, 0);
	//E_field* E_plane = new E_field_plane(1, 1, 0, k, r);
	//cout << E_plane->get_Complex_E_field() << endl;
	//cout << '\n';
	//  //ball
	//E_field* E_ball = new E_field_ball(1, 1, 0, k, r);
	//cout << E_ball->get_Complex_E_field() << endl;
	//cout << '\n';
	

	///*  photo test  */
	///*  OK  */
	//Photo photo = Photo(8, 8, 0.001);

	/********«Øºc´ú¸Õ*******/
	double default_time = 0.0;
		//laser
	Vector_3D laser_k = Vector_3D(10000000.0, 0.0, 0.0);
	Complex_d laser_U = 1;
	double laser_omega = 2 * 3.14159;
	
	Laser laser=Laser(laser_k,laser_U,laser_omega);


		//photo
	int photo_height_px = 8;
	int photo_width_px = 8;
	double photo_pixel_size = 0.001; //measured in meter
	Photo photo = Photo(photo_width_px, photo_height_px, photo_pixel_size);

		//object points
	Points_Ptr_Set points_ptr_set;
	points_ptr_set.resize(3);
			//object_point 1
	Vector_3D object_position_1 = Vector_3D(10, 10, 10);
	points_ptr_set[0] = new Object_Point(object_position_1);
			//object_point 2
	Vector_3D object_position_2 = Vector_3D(10, 9.2, 10.1);
	points_ptr_set[1] = new Object_Point(object_position_2);
			//object_point 3
	Vector_3D object_position_3 = Vector_3D(9.5, 8.1, 10.9);
	points_ptr_set[2] = new Object_Point(object_position_3);


		//Interference_Manager
	Interference_Manager interference_manager = Interference_Manager();
	interference_manager.superimpose(photo, points_ptr_set, laser);

		//Image_generator
	Image_generator image_generator = Image_generator();
	image_generator.load_intensity_matrix(photo.get_intensity_matrix());
	image_generator.normalize_image_intensity_matrix();



	system("PAUSE");
	return 0;
}