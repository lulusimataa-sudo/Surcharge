#include "Complexe.h"
#include<iostream>
using namespace std;

Complexe::Complexe(double re, double im)
	: re(re), im(im)
{
}

Complexe::Complexe(const Complexe& c)
{
	this->re = c.re;
	this->im = c.im;
}

Complexe Complexe::operator-(const Complexe& c) const
{
	Complexe result(this->re - c.re, this->im - c.im);
	return result;
}

Complexe Complexe::operator-(double& a) const
{
	Complexe result(this->re - a, this->im - 0.0);
	return result;
}

Complexe Complexe::operator*(const Complexe& m) const
{
	Complexe result(this->re * m.re - this->im * m.im, this->re * m.im + this->im * m.re);
	return result;
}

Complexe Complexe::operator*(double& a) const
{
	Complexe result(this->re * a, this->im * 1);
	return result;
}

Complexe Complexe::operator/(const Complexe& d) const
{
	double denom = d.re * d.re + d.im * d.im;
	Complexe result((this->re * d.re + this->im * d.im) / denom, (this->im * d.re - this->re * d.im) / denom);
	return result;
}

Complexe Complexe::operator/(double&n) const
{
	double denom = n * n;
	Complexe result(this->re / n, this->im / 1	);
	return result;
}

bool Complexe::operator==(const Complexe& e) const
{
	return this->re == e.re && this->im == e.im;
}

bool Complexe::operator!=(const Complexe& e) const
{

	return !(*this == e);
}

bool Complexe::operator<=(const Complexe& e) const
{
	return this->re <= e.re && this->im <= e.im;
}

bool Complexe::operator>=(const Complexe& e) const
{
	return this->re >= e.re && this->im >= e.im;
}

bool Complexe::operator<(const Complexe& e) const
{	
	return this->re < e.re && this->im < e.im;
}

bool Complexe::operator>(const Complexe& e) const
{
	return this->re > e.re && this->im > e.im;
}	

void Complexe::afficher() const
{
	if (this->im < 0)
		cout << this->re << "-i" << -this->im << endl;
	else
	cout << this->re << "+i" << this->im << endl;
}

Complexe::~Complexe()
{
}
