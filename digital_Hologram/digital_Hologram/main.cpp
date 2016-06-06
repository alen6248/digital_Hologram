// digital_Hologram.cpp : 定義主控台應用程式的進入點。
//

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
	Vector_3D* vec1 = new Vector_3D(1, 2, 3);
	Vector_3D* vec2 = new Vector_3D(3, 2, 1);
	cout << "vec1 norm" << vec1->get_norm() << endl;
	cout << "vec1 norm" << vec1->get_norm() << endl;
	cout << "vec1 * vec2" << "=" << (*vec1)*(*vec2) << "=" << vec1->dot_product(*vec2);
    
	return 0;
}

