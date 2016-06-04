#include "Vector_3D.h"

class Pixel {
public:
	Pixel();
	Pixel(int _w, int _h);
	~Pixel();


private:
	Vector_3D location;

	//need to normalize !
	int w;
	int h;
	double intensity;


};