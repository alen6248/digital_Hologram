#pragma once
#include "stdafx.h"
#include"E_field.h"
#include "Vector_3D.h"
#include "Complex.h"

class E_field_ball :public E_field
{
	public:
		E_field_ball();
		E_field_ball(double _U, double _w, double _t, Vector_3D _k, Vector_3D _r);
		~E_field_ball();
		virtual Complex_d get_Complex_E_field(double, double, double, Vector_3D, Vector_3D) {
		
		}
};

