#pragma once
#include"E_field.h"

class E_field_plane :public E_field
{

	public:
		E_field_plane();
		~E_field_plane();
		virtual double get_Complex_E_field(double t);
};

