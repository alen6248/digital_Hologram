#pragma once
#include "stdafx.h"
#include "Laser.h"

Laser::Laser()
{
}

Laser::Laser(Vector_3D _k, Complex_d _U, double _omega)
	:k(_k),U(_U),omega(_omega)
{
}

Laser::~Laser()
{
}
