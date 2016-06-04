#include "stdafx.h"
#include"E_field.h"
#include<iostream>
using namespace std;

E_field::E_field() {
}
E_field::E_field(double _U, double _w, double _t, Vector_3D _k, Vector_3D _r)
	:U(_U),w(_w),t(_t),k(_k),r(_r)
{
}
E_field::~E_field() {

}
void E_field::set_t(double value) {
	t = value;
}
void E_field::set_w(double value) {
	w = value;
}
void E_field::set_U(double value) {
	U = value;
}
//double E_field::get_Complex_E_field(double) {
//
//}
