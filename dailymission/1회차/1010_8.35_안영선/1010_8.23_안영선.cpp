#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void sumdistance(const double list[][2], double result[20], int size);

int main()
{
	int number=0;
	do {
		cout << "Enter the number of cities: ";
		cin >> number;
	} while (number > 20);

	double list[20][2];
	cout << "Enter the coordinates of the cities: ";
	for (int i = 0; i < number; i++) {
		cin >> list[i][0] >> list[i][1];
	}

	double sumd[20] = { 0 };
	sumdistance(list, sumd, number);

	double min = sumd[0];
	int minIndex = 0;
	for (int i = 1; i < number; i++) {
		if (min > sumd[i]) {
			min = sumd[i];
			minIndex = i;
		}
	}
	cout <<fixed<<setprecision(1)<< "The central city is at (" << list[minIndex][0] << "," << list[minIndex][1] << ")\n";
	cout <<fixed<<setprecision(2)<< "The total distance to all ohter cities is " << sumd[minIndex];

	system("pause");
	return 0;
}
void sumdistance(const double list[][2], double result[20], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i != j) {
				result[i] += sqrt(pow(list[i][0]-list[j][0], 2) + pow(list[i][1] - list[j][1], 2));
			}
		}
	}
}
