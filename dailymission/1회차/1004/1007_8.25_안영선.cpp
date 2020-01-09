#include <iostream>
using namespace std;

const int SIZE = 3;
bool isMarkovMatrix(const double m[][SIZE]);

int main()
{
	double list[SIZE][SIZE];
	cout << "Enter a 3 by 3 matrix row by row: \n";
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			cin >> list[i][j];

	if (isMarkovMatrix(list))
		cout << "It is a Markov matrix";
	else
		cout << "It is not a Markov matrix";

	system("pause");
	return 0;
}
bool isMarkovMatrix(const double m[][SIZE])
{
	bool check = true;
	for (int i = 0; i < SIZE; i++) {
		double sum = 0;
		for (int j = 0; j < SIZE; j++)
		{
			if (m[i][j] < 0)
				return false;
			sum += m[j][i];
		}
		if (sum != 1)
			return false;
	}
	return true;
}