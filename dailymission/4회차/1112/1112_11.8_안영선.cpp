#include <iostream>
using namespace std;

class Circle2D {
public:
	Circle2D() {
		x = y = 0;
		radius = 1;
	}Circle2D(double _x, double _y, double _radius) {
		x = _x;
		y = _y;
		radius = _radius;
	}
	const double getArea() {
		return radius * radius*3.14159;
	}const double getPerimeter() {
		return 2 * radius*3.14159;
	}const bool contains(double _x, double _y) {
		if (sqrt(pow(x-_x,2)+pow(y-_y,2))<=radius)
			return true;
		return false;
	}const bool contains(const Circle2D& circle) {
		if (sqrt(pow(x - circle.x, 2) + pow(y - circle.y, 2)) <= (radius - circle.radius))
			return true;
		return false;
	}const bool overlaps(const Circle2D& circle) {
		if (sqrt(pow(x - circle.x, 2) + pow(y - circle.y, 2)) <= radius + circle.radius)
			return true;
		return false;
	}
	const double getX() {
		return x;
	}const double getY() {
		return y;
	}const double getRadius() {
		return radius;
	}
private:
	double x, y;
	double radius;
};

int main()
{
	Circle2D c1(2, 2, 5.5), c2(2, 2, 5.5), c3(4, 5, 10.5);
	cout << "c1의 면적: " << c1.getArea() << " 둘레: " << c1.getPerimeter() <<
		"\nTRUE: 1  FALSE: 0\n(3,3)이 c1 내부에 있다: "<<c1.contains(3,3)<<"\nc2가 c1안에 있다: "<<
		c1.contains(c2)<<"\nc3이 c1과 중첩된다: "<<c1.overlaps(c3)<<endl;


	system("pause");
	return 0;
}