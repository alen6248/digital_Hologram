#include "stdafx.h"
#include "E_field_plane.h"

E_field_plane::E_field_plane()
{
}

E_field_plane::E_field_plane(Complex_d _U, double _omega, double _time, Vector_3D _k, Vector_3D _r)
	:E_field(_U,_omega,_time,_k,_r)
{
}

E_field_plane::~E_field_plane()
{
}

Complex_d E_field_plane::get_Complex_E_field()
{

	Complex_d result;
	result = U*exp(-1i*(k*r - omega*time));


	return result;

}
