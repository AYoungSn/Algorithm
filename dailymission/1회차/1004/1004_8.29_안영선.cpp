#include <iostream>
using namespace std;

const int SIZE = 3;
bool equals(const int m1[][SIZE], const int m2[][SIZE]);
void matrix(int m1[][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cin >> m1[i][j];
		}
	}
}
int main()
{
	int m1[SIZE][SIZE],m2[SIZE][SIZE];
	cout << "Enter m1: ";
	matrix(m1);
	cout << "Enter m2: ";
	matrix(m2);


	if (equals(m1, m2))
		cout << "Two arrays are identical";
	else
		cout << "Twon arrays are not identical";

	system("pause");
	return 0;
}

bool equals(const int m1[][SIZE], const int m2[][SIZE])
{
	bool equal[SIZE][SIZE];
	
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			equal[i][j] = false;

	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			for (int k = 0; k < SIZE; k++)
				for (int l = 0; l < SIZE; l++)
					if (m1[i][j] == m2[k][l])
						equal[i][j] = true;
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			if (!equal[i][j])
				return false;

	return true;
}