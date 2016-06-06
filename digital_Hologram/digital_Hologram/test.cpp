

#include "stdafx.h"
#include "Vector_3D.h"
#include "Laser.h"
#include "Object_Point.h"
#include "Pixel.h"
#include "Photo.h"
#include "Complex.h"
#include "E_field.h"
#include "E_field_ball.h"
#include "E_field_plane.h"
#include <iostream>


using namespace std;


int main()
{
	/*  Vector_3D test  */ 
	/*  OK  */
	cout << "Vector_3D test" << endl;

	Vector_3D vec1 = Vector_3D(1, 2, 3);
	Vector_3D vec2 = Vector_3D(-1, -2, -3);
	cout << "vec1*vec2="<<vec1*vec2 <<"="<<vec1.dot_product(vec2)<< endl;
	cout << "vec1 norm=" << vec1.get_norm() << endl;
	vec1.print();
	Vector_3D vec3 = vec1 + vec2;
	Vector_3D vec4 = vec1 - vec2;
	vec3.print();
	vec4.print();
	cout << endl;

	/*  Complex_d  */
	/*  OK  */
	Complex_d U = 1;
	Complex_d exp_term1 = U*exp(1i*3.14159);
	Complex_d exp_term2 = U*exp(1i*3.14159*0.5);
	Complex_d exp_term3 = U*exp(1i*3.14159*0.25);
	cout << exp_term1 << exp_term2 <<exp_term3<< endl;
	cout << '\n';

	/*  E_field test  */
	/*  OK  */
	  //plane
	cout << "E_field test" << endl;
	Vector_3D k = Vector_3D(1, 2, 3);
	Vector_3D r = Vector_3D(10, 0, 0);
	E_field* E_plane = new E_field_plane(1, 1, 0, k, r);
	cout << E_plane->get_Complex_E_field() << endl;
	cout << '\n';
	  //ball
	E_field* E_ball = new E_field_ball(1, 1, 0, k, r);
	cout << E_ball->get_Complex_E_field() << endl;
	cout << '\n';


	/*  photo test  */
	/*  OK  */
	Photo photo = Photo(8, 8, 0.001);


	system("PAUSE");
	return 0;
}