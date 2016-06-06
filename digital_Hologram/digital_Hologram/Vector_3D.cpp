#pragma once
#include "stdafx.h"
#include "Vector_3D.h"
#include <cmath>
#include <iostream>

Vector_3D::Vector_3D():x(0),y(0),z(0)
{
}

Vector_3D::Vector_3D(double _x, double _y, double _z):x(_x),y(_y),z(_z)
{
	calculate_norm();
}

Vector_3D::Vector_3D(Vector_3D & vec)
	:x(vec.x),y(vec.y),z(vec.z)
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

Vector_3D Vector_3D::operator+(const Vector_3D & const that)
{
	double x = this->x + that.x;
	double y = this->y + that.y;
	double z = this->z + that.z;
	Vector_3D result=Vector_3D(x,y,z);

	return result;
}

Vector_3D Vector_3D::operator-(const Vector_3D & const that)
{
	double x = this->x - that.x;
	double y = this->y - that.y;
	double z = this->z - that.z;
	Vector_3D result = Vector_3D(x, y, z);

	return result;
}

double Vector_3D::operator*(const Vector_3D & const that)
{
	double dot_product =
		this->x * that.x
		+ this->y * that.y
		+ this->z * that.z;
	return dot_product;
}

void Vector_3D::calculate_norm()
{
	norm = sqrt(x*x + y*y + z*z);
}

void Vector_3D::print()
{
	std::cout << '(' << this->x<< ',' << this->y<< ','<<this->z << ')';
}
