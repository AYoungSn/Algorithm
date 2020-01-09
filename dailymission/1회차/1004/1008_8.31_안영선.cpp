#include <iostream>
using namespace std;

const int SIZE = 2;
bool getIntersectingPoint(const double points[][SIZE], double result[])
{
	if ((points[0][1] - points[1][1]) / (points[0][0] - points[1][0]) == (points[2][1] - points[3][1]) / (points[2][0] - points[3][0]))
		return false;
	
	double e = ((points[0][1] - points[1][1])*points[0][0]) -( (points[0][0] - points[1][0])*points[0][1]);
	double f= ((points[2][1] - points[3][1])*points[2][0]) - ((points[2][0] - points[3][0])*points[2][1]);
	double a = points[0][1] - points[1][1];
	double b =-( points[0][0] - points[1][0]);
	double c = points[2][1] - points[3][1];
	double d =-( points[2][0] - points[3][0]);

	result[0] = (e*d - (b * f)) / (a*d - (b * c));//x
	result[1] = (a*f -( e * c)) / (a*d - (b * c) );
	return true;
}
int main()
{
	double point[4][2] = { 0 };//x=0,y=1
	double result[2];
	cout << "Enter x1, y1, x2, y2, x3, y3, x4, y4: ";

	for (int i = 0; i < 4; i++)
		cin >> point[i][0] >> point[i][1];

	if (!getIntersectingPoint(point, result))
		cout << "The two lines are parallel";
	else
		cout << "The intersecting point is at (" << result[0] << ", " << result[1] << ")";

	system("pause");
	return 0;
}