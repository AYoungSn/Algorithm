#ifndef LINEAR_H
#define LINEAR_H

class LinearEquation {
public:
	LinearEquation(double a, double b, double c, double d, double e, double f) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->e = e;
		this->f = f;
	}
	double geta() {
		return a;
	}double getb() {
		return b;
	}double getc() {
		return c;
	}double getd() {
		return d;
	}double gete() {
		return e;
	}double getf() {
		return f;
	}
	bool isSolvable() {
		if ((a*d - b * c) != 0)
			return 1;
		return false;
	}
	double getx() {
		return (e*d - (b * f)) / (a*d - b * c);
	}
	double gety() {
		return (a*f - e * c) / (a*d - b * c);
	}
private:
	double a, b, c, d, e, f;
};
#endif
