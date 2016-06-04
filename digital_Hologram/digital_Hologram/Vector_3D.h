#pragma once


class Vector_3D { // in meter
public:
	Vector_3D();
	Vector_3D(double _x, double _y, double _z);
	~Vector_3D();

	double get_norm();
	double dot_product(const Vector_3D& const that) const;
	Vector_3D& operator+(const Vector_3D& const that);
	double operator*(const Vector_3D& const that); 
	void calculate_norm();

private:
	//position
	double x;
	double y;
	double z;

	double norm;






};