#include <iostream>
#include <cmath>
using namespace std;

class RegularPolygon {
public:
	RegularPolygon() {
		n = 3;
		side = 1;
		x = 0;
		y = 0;
	}
	RegularPolygon(int num, double length) {
		n = num;
		side = length;
		x = y = 0;
	}
	RegularPolygon(int num, double length, double _x, double _y) {
		x = _x;
		y = _y;
		n = num;
		side = length;
	}
	int getN() {
		return n;
	}double getX() { return x; }
	double getY() { return y; }
	double getSide() { return side; }
	void setN(int num) { n = num; }
	void setX(int _x) { x = _x; }
	void setY(int _y) { y = _y;}
	void setSide(int length) { side = length; }
	double getPerimeter() { return side * n; }
	double getArea() { return (n*side*side) / (4 * tan(3.14 / n)); }
private:
	int n;
	double side,x,y;
};

int main()
{
	RegularPolygon rp1, rp2(6,4), rp3(10,4,5.6,7.8);
	
	cout << "P1\n�ѷ�: " << rp1.getPerimeter() << ", ����: " << rp1.getArea()<<endl;
	cout << "P2\n�ѷ�: " << rp2.getPerimeter() << ", ����: " << rp2.getArea() << endl;
	cout << "P3\n�ѷ�: " << rp3.getPerimeter() << ", ����: " << rp3.getArea() << endl;

	system("pause");
	return 0;
}