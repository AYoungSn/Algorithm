#include <iostream>
using namespace std;

const int SIZE = 2;
void getRightmostLowestPoint(const double points[][SIZE], int numberOfPoints, double rightMostPoint[]);

int main()
{
	cout << "Enter 6 points: ";
	double list[6][2];

	for (int i = 0; i < 6; i++)
		cin >> list[i][0] >> list[i][1];

	double rmp[6];
	for (int i = 0; i < 6; i++) {
		double max = list[i][0];
		double ymax = list[i][1];
		int maxIndex = i;
		for (int j = i; j < 6; j++) {
			if (max< list[j][0]) {
				max = list[j][0];
				maxIndex = j;
				ymax = list[i][1];
			}
		}
		if (maxIndex != i) {
			list[maxIndex][0] = list[i][0];
			list[i][0] = max;
			list[maxIndex][1] = list[i][1];
			list[i][1] = ymax;
		}
	}
	for (int i = 0; i < 6; i++)
		rmp[i] = list[i][0];
	
	getRightmostLowestPoint(list, 6, rmp);
	
	


	system("pause");
	return 0;
}
void getRightmostLowestPoint(const double points[][SIZE], int numberOfPoints, double rightMostPoint[]) {
	
	
	double min = points[0][1];
	int minIndex = 0;
	for (int j = 1; j < numberOfPoints; j++) {
		if (min > points[j][1]) {
			min = points[j][1];
			minIndex = j;
		}
	}
	for (int i = 0; i < numberOfPoints; i++) {
			if (rightMostPoint[i] == points[minIndex][0]) {
				cout << "The rightmost lowest point is ("<<rightMostPoint[i]<<", "<<points[minIndex][1]<<")";
				break;
			}
	}

	
}