#pragma once

class LV
{
public:
	LV();
	LV(const double, const double, const double, const double);
	double x() const;
	double y() const;
	double z() const;
	double t() const;
	void x(const double);
	void y(const double);
	void z(const double);
	void t(const double);
	LV sum(const LV&) const;
	LV sub(const LV&) const;
	double smul(const LV&) const;
	void perehod(const double);
	void outLV() const;
	LV operator - (const LV&) const;
	LV operator -() const;
	double operator * (const LV&) const;
	LV operator + (const LV&) const;
	double norma() const;
	void dout(const LV&) const;
private:
	double x_, y_, z_, t_;
};

//void dout(const double);