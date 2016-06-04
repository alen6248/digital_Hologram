#pragma once
#include "stdafx.h"
#include "Object_Point.h"

Object_Point::Object_Point():position(0.0,0.0,0.0)
{
}

Object_Point::Object_Point(Vector_3D _position):position(_position)
{
}

Object_Point::~Object_Point()
{
}
