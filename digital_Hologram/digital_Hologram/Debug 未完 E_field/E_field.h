#pragma once
#include "Complex.h"
#include "Vector_3D.h"

class E_field
{

	public:
		E_field();
		E_field(double _U, double _w, double _t, Vector_3D _k, Vector_3D _r);
		~E_field();


		
		void set_t(double);
		void set_w(double);
		void set_U(double);
		virtual Complex_d get_Complex_E_field(double,double,double,Vector_3D,Vector_3D);
	private:
		double w;
		Vector_3D k;
		Vector_3D r;
		double t;
		double U;
};