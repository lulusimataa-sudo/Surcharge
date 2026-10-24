#pragma once
class Complexe
{
private:
	double re;
	double im;
public:
	Complexe(double, double);
	Complexe(const Complexe&);
	Complexe operator-(const Complexe&) const;
	Complexe operator-(double &) const;
	Complexe operator*(const Complexe&) const;
	Complexe operator*(double&) const;	
	Complexe operator/(const Complexe&) const;
	Complexe operator/(double&) const;
	bool operator==(const Complexe&) const;
	bool operator!=(const Complexe&) const;
	bool operator <=(const Complexe&) const;
	bool operator >=(const Complexe&) const;	
	bool operator <(const Complexe&) const;
	bool operator >(const Complexe&) const;
	void afficher() const;
	~Complexe();
};

