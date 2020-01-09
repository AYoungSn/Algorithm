#include <iostream>
using namespace std;
const int SIZE = 6;
int main()
{
	cout << "Enter a 6-by-6 matrix row by row:\n";
	int list[6][6] = {
		{1,1,1,0,1,1},
	{1,1,1,1,0,0},
	{0,1,0,1,1,1},
	{1,1,1,1,1,1},
	{0,1,1,1,1,0},
	{1,0,0,0,0,1} };
	/*for(int i=0;i<SIZE;i++)
	for(int j=0;j<SIZE;j++)
	cin>>list[i][j];*/
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			cout << list[i][j] << " ";
		}
		cout << endl;
	}
	int cntR[SIZE] = { 0 }, cntC[SIZE] = { 0 };
	int r(0), c(0);
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (list[i][j] == 1)
				cntR[i]++;
			if (list[j][i] == 1)
				cntC[i]++;
		}
		
	}
	for (int i = 0; i<SIZE; i++)
	if (cntR[i] % 2 != 0) {
		r = i;
		break;
	}
	for(int i=0;i<SIZE;i++){
		if(cntC[i] % 2 != 0)
		{
			c = i;
			break;
		}
	}
	cout << "The first row and column where the parity is violated is at (" << r << ", " << c << ")\n";

	system("pause");
	return 0;
}