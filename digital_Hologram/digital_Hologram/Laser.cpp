#pragma once
#include "stdafx.h"
#include "Laser.h"

Laser::Laser()
{
}

Laser::Laser(Vector_3D _k, Complex_d _U, double _omega)
	:k(_k),U(_U),omega(_omega)
{
}

Laser::~Laser()
{
}

Complex_d Laser::get_Complex_E_field(Vector_3D r, double time=0)
{
	return U*exp(-1i*(k*r - omega*time));
}

Vector_3D Laser::get_k()
{
	return k;
}

double Laser::get_omega()
{
	return omega;
}

Complex_d Laser::get_U()
{
	return U;
}
