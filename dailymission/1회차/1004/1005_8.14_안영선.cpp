#include <iostream>
#include <ctime>
using namespace std;

const int SIZE = 4;
int main()
{
	int list[SIZE][SIZE];

	srand(time(0));
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			list[i][j] = rand() % 2;
			cout << list[i][j] << " ";//행렬 값 채우면서 동시에 출력
		}
		cout << endl;
	}
	
	int largeColindex = 0;
	int largeRowindex = 0;
	int maxRowcnt = 0;
	int maxColcnt = 0;
	int rowcnt, colcnt;

	for (int i = 0; i < SIZE; i++)
	{
		colcnt = 0;
		rowcnt = 0;
		for (int j = 0; j < SIZE; j++)
		{
			if (list[i][j] == 1)
				rowcnt++;
			if (list[j][i] == 1)
				colcnt++;
		}
		if (maxRowcnt < rowcnt)
		{
			maxRowcnt = rowcnt;
			largeRowindex = i;
		}
		if (maxColcnt < colcnt)
		{
			maxColcnt = colcnt;
			largeColindex = i;
		}
	}

	cout << "\nThe largest row index: " << largeRowindex;
	cout << "\nThe largest column index: " << largeColindex;

	system("pause");
	return 0;
}