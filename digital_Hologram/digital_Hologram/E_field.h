#pragma once
#include "Vector_3D.h"
#include "Complex.h"
#include <cmath>
#include <complex.h>


class E_field {
public:
	E_field();
	E_field(Complex_d _U,double _omega,double _time, Vector_3D _k, Vector_3D _r);
	virtual ~E_field();

	virtual Complex_d calculate_Complex_E_field();
	Complex_d get_Complex_E_field();
protected:
	double omega;
	double time;
	Complex_d U;
	Vector_3D k;
	Vector_3D r;
	Complex_d Complex_E_field;


};