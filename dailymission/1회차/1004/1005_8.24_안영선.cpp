#include <iostream>
using namespace std;

bool checklist(const int grid[][9]);

int main()
{
	int list[9][9] = {
		{5,3,4,6,7,8,9,1,2},
	{6,7,2,1,9,5,3,4,8},
	{1,9,8,3,4,2,5,6,7},
	{8,5,9,7,6,1,4,2,3},
	{4,2,6,8,5,3,7,9,1},
	{7,1,3,9,2,4,8,5,6},
	{9,6,1,5,3,7,2,8,4},
	{2,8,7,4,1,9,6,3,5},
	{3,4,5,2,8,6,1,7,9} };

	if (checklist(list))
		cout << "valid solution!" << endl;
	else
		cout << "invalid solution!" << endl;

	system("pause");
	return 0;
}

bool checklist(const int grid[][9])
{
	bool check[9][9] = { false };
	for(int i=0;i<9;i++)
		for (int j = 1; j < 10; j++) {
			for (int k = 0; k < 9; k++){
				if (grid[i][k] == j) {
					check[i][k] = true;
					break;
				}
			}
		}
	for (int i = 0; i<9; i++)
		for (int j = 1; j < 10; j++)
			for (int k = 0; k < 9; k++)
			{
				if (grid[k][i] == j) {
					check[k][i] = true;
					break;
				}
			}
	
	bool list[9];
			
	for (int i = 0; i<9; i++)
		for (int j = 0; j < 9; j++)
		{
			for (int k = 0; k < 9; k++)
				list[k] = false;
			for (int a = (i / 3) * 3; a < (i / 3) * 3 + 3; a++)
				for (int b = (j / 3) * 3; b < (j / 3) * 3 + 3; b++)
					list[grid[a][b] - 1] = true;
			
			for(int n=0;n<9;n++)
				if (list[n] == false)
					return false;
		}

	
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				if (check[i][j] == false)
					return false;
			}
		}
		return true;
}