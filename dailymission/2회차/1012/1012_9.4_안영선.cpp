#include <iostream>
using namespace std;

class MyPoint {
	double x, y;
public:
	MyPoint() {
		x = y = 0;
	}
	MyPoint(double x, double y) {
		this->x = x;
		this->y = y;
	}
	double getx() {
		return x;
	}
	double gety() {
		return y;
	}
	double distance(double _x, double _y) {
		return sqrt(pow(x - _x, 2) + pow(y - _y, 2));
	}
};
int main()
{
	MyPoint P1;
	MyPoint P2(10, 30.5);

	cout << "P1: (" << P1.getx() << ", " << P1.gety() << ")\n";
	cout << "P2: (" << P2.getx() << ", " << P2.gety() << ")\n";
	cout << "두점 사이의 거리: " << P2.distance(P1.getx(), P1.gety());


	system("pause");
	return 0;
}