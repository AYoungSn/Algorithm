#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
const int SIZE = 4;

int main()
{
	vector<vector<int>> list(SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		list[i] = vector<int>(SIZE);
	}
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
	vector<int> largeColindex(4);
	vector<int> largeRowindex(4);
	int maxRowcnt = 0;
	int maxColcnt = 0;
	int rowcnt, colcnt;


	for (int i = 0; i < SIZE; i++)
	{
		colcnt = 0;
		rowcnt = 0;
		for (int j = 0; j < SIZE; j++)
		{
			if (list[i][j] == 1) {
				rowcnt++;
				largeRowindex[i]++;
			}
			if (list[j][i] == 1) {
				largeColindex[i]++;
				colcnt++;
			}
		}
		if (maxRowcnt <= rowcnt)
			maxRowcnt = rowcnt;
		
		if (maxColcnt <= colcnt)
			maxColcnt = colcnt;
	}
	cout << "\nThe largest row index: ";
	for (int i = 0; i < SIZE; i++)
	{
		if (maxRowcnt == largeRowindex[i])
			cout << i << " ";
	}
	cout << "\nThe largest column index: ";
	for (int i = 0; i < SIZE; i++)
	{
		if (maxColcnt == largeColindex[i])
			cout << i << " ";
	}

	system("pause");
	return 0;
}