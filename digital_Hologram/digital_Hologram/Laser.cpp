#pragma once
#include "stdafx.h"
#include "Laser.h"

Laser::Laser():wave_vector(0.0,0.0,0.0),amplitude(0),angular_frequence(0)
{
}

Laser::Laser(Vector_3D _wave_vector, double _amplitude, double _angular_frequcnce)
	:wave_vector(_wave_vector),amplitude(_amplitude),angular_frequence(_angular_frequcnce)
{
}

Laser::~Laser()
{
}
