#pragma once

class LV
{
public:
	LV();
	LV(double, double, double, double);
	double x() const;
	double y() const;
	double z() const;
	double t() const;
	void x(double);
	void y(double);
	void z(double);
	void t(double);
	LV sum(const LV&) const;
	LV sub(const LV&) const;
	double smul(const LV&) const;
	LV perehod(double);
	void outLV() const;
	LV operator - (const LV&) const;
	LV operator -() const;
	double operator * (const LV&) const;
	LV operator + (const LV&) const;
private:
	double x_, y_, z_, t_;
};

void dout(double a);