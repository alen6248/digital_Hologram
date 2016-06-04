#include "Vector_3D.h"


class Laser {
public:
	Laser();
	Laser(Vector_3D _wave_vector, double _amplitude, double _angular_frequcnce);
	~Laser();


private:
	Vector_3D wave_vector;
	double amplitude;
	double angular_frequence;
	//E_field  needed !
};