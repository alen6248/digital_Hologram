#pragma once
#include "E_field.h"


class E_field_plane :public E_field {
public:
	E_field_plane();
	E_field_plane(Complex_d _U, double _omega, double _time, Vector_3D _k, Vector_3D _r);
	virtual ~E_field_plane();

	virtual Complex_d calculate_Complex_E_field();

private:

};