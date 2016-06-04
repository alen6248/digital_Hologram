#include "stdafx.h"
#include "Vector_3D.h"
#include <cmath>


Vector_3D::Vector_3D():x(0),y(0),z(0)
{
}

Vector_3D::Vector_3D(double _x, double _y, double _z):x(_x),y(_y),z(_z)
{
	calculate_norm();
}

Vector_3D::~Vector_3D()
{
}

double Vector_3D::get_norm()
{
	return norm;
}



double Vector_3D::dot_product(const Vector_3D& const that) const
{
	double dot_product = 
		this->x * that.x
		+ this->y * that.y
		+ this->z * that.z;
	return dot_product;
}

Vector_3D & Vector_3D::operator+(const Vector_3D & const that)
{
	this->x = this->x + that.x;
	this->y = this->y + that.y;
	this->z = this->z + that.z;



	return *this;
}

void Vector_3D::calculate_norm()
{
	norm = sqrt(x*x + y*y + z*z);
}
