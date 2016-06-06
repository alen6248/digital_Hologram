#include "Vector_3D.h"
#include <vector>
#include "Complex.h"

class Object_Point {
public:
	Object_Point();
	Object_Point(Vector_3D _position);
	~Object_Point();
	Complex_d get_Complex_E_field(
			Complex_d _U, 
			Vector_3D k_laser, 
			Vector_3D r_laser_to_point, 
			double omega, 
			Vector_3D r_point_to_photo, 
			double time
			);
	Vector_3D get_position();

private:
	Vector_3D position;  // in meter 

};

