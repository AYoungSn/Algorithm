#include <iostream>
#include <cmath>
using namespace std;

const int SIZE = 2;
double getTriangleArea(const double points[][SIZE])
{
	double d1, d2, d3,s;
	d1 = sqrt(pow(points[0][0] - points[1][0], 2) + pow(points[0][1] - points[1][1], 2));
	d2 = sqrt(pow(points[1][0] - points[2][0], 2) + pow(points[1][1] - points[2][1], 2));
	d3 = sqrt(pow(points[2][0] - points[0][0], 2) + pow(points[2][1] - points[0][1], 2));
	s = (d1 + d2 + d3) / 2;
	return sqrt(s*(s - d1)*(s - d2)*(s - d3));
}
int main()
{
	double points[3][2];
	cout << "Enter x1, y1, x2, y2, x3, y3: ";
	for (int i = 0; i<3; i++)
		for (int j = 0; j<2; j++)
			cin >> points[i][j];

	if (getTriangleArea(points)==0)
		cout << "The three points are on the same line" << endl;
	else
		cout << "The area of the triangle is " << getTriangleArea(points);


	system("pause");
	return 0;
}