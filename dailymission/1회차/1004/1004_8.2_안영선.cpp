#include <iostream>
using namespace std;

const int SIZE = 4;
double sumMajorDiagonal(const double m[][SIZE]);

int main()
{
	cout << "Enter a 4-by-4 matrix row by row:\n";
	double m[SIZE][SIZE];

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++)
		{
			cin >> m[i][j];
		}
	
	}
	cout << "Sum of the elements in the major diagonal is " << sumMajorDiagonal(m);

	system("pause");
	return 0;
}

double sumMajorDiagonal(const double m[][SIZE])
{
	double sum = 0;
	for (int i = 0; i < SIZE; i++)
		sum += m[i][i];

	return sum;
}