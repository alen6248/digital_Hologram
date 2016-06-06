#include "Vector_3D.h"
#include "E_field_plane.h"
#include "Complex.h"

class Laser {
public:
	Laser();
	Laser(Vector_3D _k, Complex_d _U, double _omega);
	~Laser();

	Complex_d get_Complex_E_field(Vector_3D r, double time);
	Vector_3D get_k();
	double get_omega();
	Complex_d get_U();

private:


	Vector_3D k;
	Complex_d U;
	double omega;
	//E_field  needed !

	//зяжи E_field_plane
};