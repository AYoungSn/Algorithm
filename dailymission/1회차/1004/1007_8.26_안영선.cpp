#include <iostream>
using namespace std;

const int SIZE = 3;
void sortRows(const double m[][SIZE], double result[][SIZE])
{
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			result[i][j] = m[i][j];

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE-1; j++){
			double currentMin = result[i][j];
			int currentMinIndex = j;
			for (int k = j+1; k < SIZE; k++) {
				if (currentMin > result[i][k]) {
					currentMin = result[i][k];
					currentMinIndex = k;
				}
			
			}
			if (currentMinIndex != j) {
				result[i][currentMinIndex] = result[i][j];
				result[i][j] = currentMin;
			}

		}


	}

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++)
			cout << result[i][j]<<" ";
		cout << endl;
	}
}

int main()
{
	double list1[SIZE][SIZE]= { { 0.15, 0.875, 0.375 },{ 0.55, 0.005, 0.225 },{ 0.30, 0.12, 0.4 } };
	cout << "Enter a 3 by 3 matrix row by row\n";


	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++)
			cout << list1[i][j]<<" ";
		cout << endl;
	}
	

	cout << "The row-sorted array is \n";
	double list2[SIZE][SIZE];

	sortRows(list1, list2);


	system("pause");
	return 0;
}