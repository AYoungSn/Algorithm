#include <iostream>
using namespace std;

bool isConsecutiveFour(int values[][7])
{
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 4; j++)
		{
			if (values[i][j] == values[i][j + 1]&&values[i][j+1]==values[i][j+2]&&values[i][j+2]==values[i][j+3])
				return true;
		}
	}

	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 3; j++)
			if (values[j][i] == values[j + 1][i]&&values[j+1][i]==values[j+2][i]&&values[j+2][i]==values[j+3][i]) {
				return true;
			}
	}

	for (int i = 3; i<6; i++)
		for (int j = 0; j < 4; j++)
		{
			if (values[i][j] == values[i - 1][j + 1] && values[i - 1][j + 1] == values[i - 2][j + 2] && values[i - 2][j + 2] == values[i - 3][j + 3])
				return true;
		}

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			if (values[i][j] == values[i + 1][j + 1] && values[i + 1][j + 1] == values[i + 2][j + 2] && values[i + 2][j + 2] == values[i + 3][j + 3])
				return true;

	return false;
}
int main()
{
	int list[6][7] = { {0,1,0,3,1,6,1},
	{0,1,6,8,6,0,1},
	{9,5,2,1,6,2,9},
	{6,9,6,6,1,9,1},
	{1,5,6,1,4,0,7},
	{3,6,1,9,4,0,7} };

	if (isConsecutiveFour(list))
		cout << "Âü";
	else
		cout << "°ÅÁþ";
		

	system("pause");
	return 0;
}