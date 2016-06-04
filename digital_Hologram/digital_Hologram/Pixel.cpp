#pragma once
#include "stdafx.h"
#include "Pixel.h"

Pixel::Pixel():w(0),h(0),intensity(0.0)
{
}

Pixel::Pixel(int _w, int _h, Vector_3D _location):w(_w),h(_h),location(_location),intensity(0.0)
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

double Pixel::get_intensity() const
{
	return intensity;
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
