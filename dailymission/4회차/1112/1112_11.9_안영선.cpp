#include <iostream>
using namespace std;

class Rectangle2D {
public:
	Rectangle2D() {
		x = y = 0;
		width = height = 1;
	}Rectangle2D(double _x, double _y, double w, double h) {
		x = _x;
		y = _y;
		width = w;
		height = h;
	}
	const double getArea() {
		return width * height;
	}const double getPerimeter() {
		return width * 2 + height * 2;
	}const bool contains(double _x, double _y) {
		if (y - height / 2.0<_y&&x - width / 2.0<_x&&y + height / 2.0>_y&&x + width / 2.0>_x)
			return true;
		return false;
	}const bool contains(const Rectangle2D &r) {
		if (y - height / 2.0<r.y&&x - width / 2.0<r.x&&y + height / 2.0>r.y && (x + width / 2.0)>r.x)
			if (r.x + r.width / 2.0<x + width / 2.0&&r.y + r.height / 2.0<y + height / 2.0&&
				r.x - r.width / 2.0>x - width / 2.0&&r.y - r.height / 2.0>y - height / 2.0)
				return true;
		return false;
	}const bool overlaps(const Rectangle2D &r) {
		if (sqrt(pow(x - r.x, 2) + pow(y - r.y, 2)) <= height / 2.0 + r.height / 2.0
			|| sqrt(pow(x - r.x, 2) + pow(y - r.y, 2)) <= width / 2.0 + r.width / 2.0)
			return true;
		return false;
	}
	const double getX() {
		return x;
	}const double getY() {
		return y;
	}void setX(double _x) {
		x = _x;
	}void setY(double _y) {
		y = _y;
	}const double getWidth() {
		return width;
	}const double getHeight() {
		return height;
	}void setWidth(double w) {
		width = w;
	}void setHeight(double h) {
		height = h;
	}
private:
	double x, y;
	double width, height;
};

int main()
{
	Rectangle2D r1(2, 2, 5.5,4.9), r2(4,5,10.5,3.2), r3(3,5,2.3,5.4);
	cout << "r1의 면적: " << r1.getArea() << " 둘레: " << r1.getPerimeter() <<
		"\nTRUE: 1  FALSE: 0\n(3,3)이 r1 내부에 있다: " << r1.contains(3, 3) << "\nr2가 r1안에 있다: " <<
		r1.contains(r2) << "\nr3이 r1과 중첩된다: " << r1.overlaps(r3) << endl;


	system("pause");
	return 0;
}