#include "Header.h"//
#include <math.h>
#include <iostream>
using namespace std;
LV::LV()
{
	x_ = y_ = z_ = t_=0;
}
LV::LV(double x, double y, double z, double t)
{
	x_ = x;
	y_ = y;
	z_ = z;
	t_ = t;
}
double LV::x() const {
	return x_;
}

double LV::y() const {
	return y_;
}

double LV::z() const {
	return z_;
}

double LV::t() const {
	return t_;
}

void LV::x(double new_x) {
	x_ = new_x;
}

void LV::y(double new_y) {
	y_ = new_y;
}

void LV::z(double new_z) {
	z_ = new_z;
}

void LV::t(double new_t) {
	t_ = new_t;
}

LV LV::sum(const LV& a) const {
	return LV(x_ + a.x_, y_ + a.y_, z_ + a.z_, t_ + a.t_);
}

LV LV::sub(const LV& a) const {
	return LV(x_ - a.x_, y_ - a.y_, z_ - a.z_, t_ - a.t_);
}

double LV::smul(const LV& a) const {
	return x_ * a.x_+ y_ * a.y_+ z_ * a.z_- t_ * a.t_;
}

void LV::perehod(double v) {
	v = atanh(v);
	double tmp = x_;
	x_ = x_ * cosh(v) - t_ * sinh(v);
	t_ = cosh(v)*t_ - sinh(v)*tmp;
}

void LV::outLV() const
{
	cout << "(" << x_ <<","<< y_ << ","<<z_ <<","<< t_ << ")" << endl;
}

void LV:: dout(const LV &a) const
{
	cout <<"smul:" <<a**this<<endl;
}

LV LV::operator-(const LV &a) const
{
	return sub(a);
}

LV LV::operator-() const
{
	return LV()-*this;
}

LV LV::operator+(const LV &a) const
{
	return sum(a);
}

double LV::operator*(const LV &a) const
{
	return smul(a);
}

double LV::norma() const
{
	return sqrt(fabs(*this**this));
}
