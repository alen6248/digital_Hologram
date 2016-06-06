#include "stdafx.h"
#include "E_field.h"
#include <iostream>

E_field::E_field()
{
}

E_field::E_field(Complex_d _U, double _omega, double _time, Vector_3D _k, Vector_3D _r)
	:U(_U),omega(_omega),time(_time),k(_k),r(_r)
{
}

E_field::~E_field()
{
}

Complex_d E_field::calculate_Complex_E_field()
{
	//debug
	std::cout << "call Base function" << endl;
	return Complex_d();
}

Complex_d E_field::get_Complex_E_field()
{
	//std::cout << this->Complex_E_field << endl;
	return Complex_E_field;
}


//Complex_d E_field::calculate_Complex_E_field()
//{
//	Complex_d result;
//	result = U*exp(-1i*(k*r - omega*time));
//
//
//	return result;
//}
