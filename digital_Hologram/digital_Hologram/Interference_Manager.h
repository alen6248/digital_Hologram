#pragma once
#include "Laser.h"
#include "Complex.h"
#include "E_field.h"
#include "E_field_ball.h"
#include "E_field_plane.h"
#include "Object_Point.h"
#include "Photo.h"

typedef vector<Object_Point*> Points_Ptr_Set;


class Interference_Manager {
public:
	Interference_Manager();
	//Interference_Manager();
	~Interference_Manager();

	void superimpose(Photo& photo,Points_Ptr_Set points_ptr_set, Laser laser);

private:
	


};