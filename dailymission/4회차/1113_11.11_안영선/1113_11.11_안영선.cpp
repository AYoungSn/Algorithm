#include <iostream>
#include <iomanip>
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
const int SIZE = 2;
Rectangle2D getRectangle(const double points[][SIZE]) {
	double minX = points[0][0];
	double minY = points[0][1];
	double maxX = points[0][0];
	double maxY = points[0][1];
	for (int i = 0; i < 5; i++) {
		if (minX > points[i][0])
			minX = points[i][0];
		if (minY > points[i][1])
			minY = points[i][1];
		if (maxX < points[i][0])
			maxX = points[i][0];
		if (maxY < points[i][1])
			maxY = points[i][1];
	}
	Rectangle2D r((minX + maxX) / 2, (minY + maxY) / 2, maxX - minX, maxY - minY);
	return r;
}

int main() {
	double points[5][SIZE];
	cout << "Enter five points: ";
	for (int i = 0; i < 5; i++)
		cin >> points[i][0]>>points[i][1];

	Rectangle2D r = getRectangle(points);
	cout << fixed << setprecision(2) << "The bounding rectangle's center ("
		<< r.getX() << ", " << r.getY() << "), width " << r.getWidth() << ", height " << r.getHeight();

	system("pause");
	return 0;
}