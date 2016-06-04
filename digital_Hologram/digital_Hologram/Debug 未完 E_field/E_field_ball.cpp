
#include"E_field_ball.h"
#include "stdafx.h"
#include<iostream>
#include<cmath>
#include<ccomplex>

using namespace std;
E_field_ball::E_field_ball():E_field() {

}
E_field_ball::E_field_ball(double _U, double _w, double _t, Vector_3D _k, Vector_3D _r)
	:E_field(_U,_w,_t,_k,_r)
{
}
E_field_ball::~E_field_ball() {

}
Complex_d E_field_ball::get_Complex_E_field(double _U, double _w, double _t, Vector_3D _k, Vector_3D _r)
{
	return _U*exp(-1i*(_w*_t + _k*_r))/_r.get_norm();
}