#pragma once
#include "Vector_3D.h"
#include "Complex.h"


class Pixel {
public:
	Pixel();
	Pixel(int _w, int _h,Vector_3D _locaiton);
	~Pixel();

	int get_w() const;
	int get_h() const;
	Vector_3D get_location();
	double get_intensity() const;
	Complex_d get_Complex_E_field() const;

	void set_w(int _w);
	void set_h(int _h);
	void set_intensity(double _intensity);
	void set_Complex_E_field(Complex_d _Complex_E_field);
	void calculate_intensity();

private:
	Vector_3D location;

	//need to normalize !
	int w;
	int h;
	double intensity;
	Complex_d Complex_E_field;


};