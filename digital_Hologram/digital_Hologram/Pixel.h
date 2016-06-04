#include "Vector_3D.h"


class Pixel {
public:
	Pixel();
	Pixel(int _w, int _h,Vector_3D _locaiton);
	~Pixel();

	int get_w() const;
	int get_h() const;
	double get_intensity() const;
	void set_w(int _w);
	void set_h(int _h);
	void set_intensity(double _intensity);


private:
	Vector_3D location;

	//need to normalize !
	int w;
	int h;
	double intensity;


};