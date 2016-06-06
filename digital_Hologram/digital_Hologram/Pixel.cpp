#pragma once
#include "stdafx.h"
#include "Pixel.h"

Pixel::Pixel():w(0),h(0),intensity(0.0)
{
}

Pixel::Pixel(int _w, int _h, Vector_3D _location)
	:w(_w),h(_h),location(_location),intensity(0.0)
{
}

Pixel::~Pixel()
{
}

int Pixel::get_w() const
{
	return w;
}

int Pixel::get_h() const
{
	return h;
}

Vector_3D Pixel::get_location()
{
	return location;
}

double Pixel::get_intensity() const
{
	return intensity;
}

Complex_d Pixel::get_Complex_E_field() const
{
	return Complex_E_field;
}

void Pixel::set_w(int _w)
{
	w = _w;
}

void Pixel::set_h(int _h)
{
	h = _h;
}

void Pixel::set_intensity(double _intensity)
{
	intensity = _intensity;
}

void Pixel::set_Complex_E_field(Complex_d _Complex_E_field)
{
	Complex_E_field = _Complex_E_field;
}
