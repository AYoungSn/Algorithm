#include <iostream>
using namespace std;

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

int main()
{
	double x1, x2, x3, x4, y1, y2, y3, y4;
	cout << "Enter x1, y1, x2, y2, x3, y3, x4, y4: ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

	double a, b, c, d, e, f;
	a = y1 - y2;
	b = -(x1 - x2);
	e = (y1 - y2)*x1 - (x1 - x2)*y1;
	c = y3 - y4;
	d = -(x3 - x4);
	f = (y3 - y4)*x3 - (x3 - x4)*y3;

	LinearEquation point(a, b, c, d, e, f);

	if (point.isSolvable())
		cout << "The intersecting point is at (" << point.getx() << ", " << point.gety() << ")"<<endl;
	else
		cout << "The two lines are parallel"<<endl;

	system("pause");
	return 0;
}