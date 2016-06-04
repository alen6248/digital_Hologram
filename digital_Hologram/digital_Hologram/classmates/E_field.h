#pragma once
class E_field
{

	public:
		E_field();
		~E_field();
		double w;
		Vector_3D k;
		Vector_3D r;
		double t;
		double U;
		void set_t(double);
		void set_w(double);
		void set_U(double);
		virtual double get_Complex_E_field();
	private:

};