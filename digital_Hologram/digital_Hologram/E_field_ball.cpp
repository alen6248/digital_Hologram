#include "stdafx.h"
#include "E_field_ball.h"

E_field_ball::E_field_ball()
{
}

E_field_ball::E_field_ball(Complex_d _U, double _omega, double _time, Vector_3D _k, Vector_3D _r)
	:E_field(_U, _omega, _time, _k, _r)
{
	calculate_Complex_E_field();
}

E_field_ball::~E_field_ball()
{
}

Complex_d E_field_ball::calculate_Complex_E_field()
{
	this->Complex_E_field = (U/ r.get_norm())*exp(-1i*(k*r - omega*time)) ;
	return this->Complex_E_field;

}
