#pragma once
class ZavdClass
{
	double x;
	double y;
	double z;

public:

	double Fn_b(); 
	double Fn_a(); 

	ZavdClass(double x, double y, double z) { this->x = x, this->y = y, this->z = z; }

	double getx() { return x; }
	double gety() { return y; }
	double getz() { return z; }

};
