#pragma once
#include"E_field.h"

class E_field_ball :public E_field
{
	public:
		E_field_ball();
		~E_field_ball();
		virtual double get_Complex_E_field(double, double, double, Vector_3D, Vector_3D) {
		
		}
};

