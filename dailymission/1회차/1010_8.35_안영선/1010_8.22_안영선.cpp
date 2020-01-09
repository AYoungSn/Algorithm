#include <iostream>
using namespace std;

int cnt=0;
void printBoard(char list[][7]);
bool isChecked(char values[][7]);
void input(char list[][7], int col, const int person);

int main()
{
	char list[6][7] = { ' ' };

	printBoard(list);

	int c;
	do {
		if (cnt % 2 == 0) {
			cout << "Drop a red disk at column(0-6): ";
			cin >> c;
			input(list, c, cnt);
			cnt++;
		}
		else if(cnt%2!=0) {
			cout << "Drop a yellow disk at column(0-6): ";
			cin >> c;
			input(list, c, cnt);
			cnt++;
		}
		printBoard(list);
		
	} while (!isChecked(list));

		if (cnt % 2 != 0)
			cout << "The Red player won\n";
		else
			cout << "The Yellow player won\n";
	
	system("pause");
	return 0;
}
void printBoard(char list[][7]) {
	
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 7; j++) {
			cout << "|" << list[i][j];
		}
		cout << "|\n";
	}
	cout << "-----------------------\n";
	
}
void input(char list[][7], int col,const int person) {
	for (int i = 5; i >= 0; i--) {
		if (person % 2 == 0) {
			if (list[i][col] != 'R'&&list[i][col]!='Y') {
				list[i][col] = 'R';
				break;
			}
		}
		else {
			if (list[i][col] != 'R'&&list[i][col] != 'Y') {
				list[i][col] = 'Y';
				break;
			}
		}
	}
}

bool isChecked(char values[][7]) {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 4; j++)
		{
			if ((values[i][j] == values[i][j + 1] && values[i][j + 1] == values[i][j + 2] && values[i][j + 2] == values[i][j + 3]
				)&&(values[i][j]=='R'||values[i][j]=='Y'))
				return true;
		}
	}

	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 3; j++)
			if ((values[j][i] == values[j + 1][i] && values[j + 1][i] == values[j + 2][i] && values[j + 2][i] == values[j + 3][i]
				)&& (values[j][i] == 'R' || values[j][i] == 'Y'))
				return true;
			
	}

	for (int i = 3; i<6; i++)
		for (int j = 0; j < 4; j++)
		{
			if ((values[i][j] == values[i - 1][j + 1] && values[i - 1][j + 1] == values[i - 2][j + 2] 
				&& values[i - 2][j + 2] == values[i - 3][j + 3]) && (values[i][j] == 'R' || values[i][j] == 'Y'))
				return true;
		}

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			if ((values[i][j] == values[i + 1][j + 1] && values[i + 1][j + 1] == values[i + 2][j + 2] 
				&& values[i + 2][j + 2] == values[i + 3][j + 3]) && (values[i][j] == 'R' || values[i][j] == 'Y'))
				return true;

	return false;
}