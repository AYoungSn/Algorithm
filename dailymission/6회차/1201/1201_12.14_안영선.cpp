#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double getDistance(double x1, double y1, double x2, double y2)
{
	return sqrt(pow((x2 - x1), 2) + pow(y2 - y1, 2));
}

int main()
{
	int size;
	cout << "점의 개수 입력: ";
	cin >> size;

	vector<vector<double> > points(size);
	for (unsigned i = 0; i < size; i++)
	{
		points[i] = vector<double>(2);
	}
	cout << "Enter " << size<<" points: ";
	for (int i = 0; i < size; i++)
		cin >> points[i][0] >> points[i][1];

	int p1 = 0, p2 = 1;
	double shortestDistance = getDistance(points[p1][0], points[p1][1], points[p2][0], points[p2][1]);

	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			double distance = getDistance(points[i][0], points[i][1], points[j][0], points[j][1]);

			if (shortestDistance > distance)
			{
				p1 = i;
				p2 = j;
				shortestDistance = distance;
			}
		}
	}

	cout << "The closet two points are (" << points[p1][0] << ", " << points[p1][1] << ") and (" <<
		points[p2][0] << ", " << points[p2][1] << ")" << endl;



	system("pause");
	return 0;
}