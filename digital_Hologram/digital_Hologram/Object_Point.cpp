#pragma once
#include "stdafx.h"
#include "Object_Point.h"
#include "Complex.h"

Object_Point::Object_Point():position(0.0,0.0,0.0)
{
}

Object_Point::Object_Point(Vector_3D _position):position(_position)
{
}

Object_Point::~Object_Point()
{
}

Complex_d Object_Point::get_Complex_E_field(Complex_d _U,Vector_3D k_laser, Vector_3D r_laser_to_point, double omega, Vector_3D r_point_to_photo, double time)
{
	double phase_laser_to_point = k_laser*r_laser_to_point;
	double phase_point_to_photo = r_laser_to_point.get_norm()*k_laser.get_norm();
	double phase_time = omega*time;	
	
	return _U*exp(-1i*(phase_laser_to_point+phase_point_to_photo-phase_time));
}

Vector_3D Object_Point::get_position()
{
	return position;
}
