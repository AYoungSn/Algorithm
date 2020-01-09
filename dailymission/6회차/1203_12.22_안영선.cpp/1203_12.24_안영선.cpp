#include <iostream>
using namespace std;


int main()
{
	double a[3][3];
	cout << "Enter 3-by-3 matrix: ";
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> a[i][j];

	cout << "Enter b1,b2,b3: ";
	int b[3];
	for (int i = 0; i < 3; i++)
		cin >> b[i];

	double aij = a[0][0] * a[1][1] * a[2][2] + a[2][0] * a[0][1] * a[1][2] + a[0][2] * a[1][0] * a[2][1] - a[0][2] * a[1][1] * a[2][0] - a[0][0] * a[1][2] * a[2][1] - a[2][2] * a[1][0] * a[0][1];

	double x = ((a[1][1] * a[2][2]-a[1][2]*a[2][1])*b[0] + (a[0][2] * a[2][1] - a[0][1] * a[2][2])*b[1] + (a[0][1] * a[1][2] - a[0][2] * a[1][1])*b[2]) / aij;
	double y= ((a[1][2] * a[2][0]-a[1][0]*a[2][2])*b[0] + (a[0][0] * a[2][2] - a[0][2] * a[2][0])*b[1] + (a[0][2] * a[1][0] - a[0][0] * a[1][2])*b[2]) / aij;
	double z= ((a[1][0] * a[2][1] - a[1][1] * a[2][0])*b[0] + (a[0][1] * a[2][0] - a[0][0] * a[2][1])*b[1] + (a[0][0] * a[1][1] - a[0][1] * a[1][0])*b[2]) / aij;

	if (aij == 0)
		cout << "No solution\n";
	else
		cout << "The solution is " << x << " " << y << " " << z;

	system("pause");
	return 0;
}