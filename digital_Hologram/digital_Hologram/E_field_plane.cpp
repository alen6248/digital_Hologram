#include "stdafx.h"
#include "E_field_plane.h"
#include <iostream>

E_field_plane::E_field_plane()
{
}

E_field_plane::E_field_plane(Complex_d _U, double _omega, double _time, Vector_3D _k, Vector_3D _r)
	:E_field(_U,_omega,_time,_k,_r)
{
	calculate_Complex_E_field();
}

E_field_plane::~E_field_plane()
{
}

Complex_d E_field_plane::calculate_Complex_E_field()
{
	this->Complex_E_field = U*exp(-1i*(k*r - omega*time));
	return U*exp(-1i*(k*r - omega*time));

}
