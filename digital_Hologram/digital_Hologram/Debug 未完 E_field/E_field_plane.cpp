#include "E_field.h"
#include"E_field_plane.h"
#include "stdafx.h"
E_field_plane::E_field_plane() 
	:E_field()
{

}
E_field_plane::E_field_plane(double _U, double _w, double _t, Vector_3D _k, Vector_3D _r)
	: E_field(_U, _w, _t, _k, _r)
{
}
E_field_plane::~E_field_plane() {

}
Complex_d E_field_plane::get_Complex_E_field(double _U, double _w, double _t, Vector_3D _k, Vector_3D _r) {
	return _U*exp(-1i*(_w*_t + _k*_r));
}