#include <iostream>
#include <ctime>
using namespace std;
const int SIZE = 6;
int main()
{
	srand(time(0));

	int list[SIZE][SIZE];

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			list[i][j] = rand() % 2;
			cout << list[i][j] << " ";
		}
		cout << endl;
	}
	int cntR[SIZE] = { 0 }, cntC[SIZE] = { 0 };
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (list[i][j] == 1)
				cntR[i]++;
			if (list[j][i] == 1)
				cntC[i]++;
		}
		if (cntR[i] % 2 != 0 || cntC[i] % 2 != 0)
		{
			cout << "Â¦¼ö°³°¡ ¾Æ´Ô";
			system("pause");
			return 0;
		}
	}
	cout << "Â¦¼ö";

	system("pause");
	return 0;
}