#include "Vector_3D.h"
#include "E_field_plane.h"
#include "Complex.h"

class Laser {
public:
	Laser();
	Laser(Vector_3D _k, Complex_d _U, double _omega);
	~Laser();


private:


	Vector_3D k;
	Complex_d U;
	double omega;
	//E_field  needed !

	//зяжи E_field_plane
};