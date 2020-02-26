#include <iostream>
using namespace std;

const char white[8][8] = {
	{ 'W','B','W','B','W','B','W','B' },
	{ 'B','W','B','W','B','W','B','W' },
	{ 'W','B','W','B','W','B','W','B' },
	{ 'B','W','B','W','B','W','B','W' },
	{ 'W','B','W','B','W','B','W','B' },
	{ 'B','W','B','W','B','W','B','W' },
	{ 'W','B','W','B','W','B','W','B' },
	{ 'B','W','B','W','B','W','B','W' }
};
const char black[8][8] = {
	{ 'B','W','B','W','B','W','B','W' },
	{ 'W','B','W','B','W','B','W','B' },
	{ 'B','W','B','W','B','W','B','W' },
	{ 'W','B','W','B','W','B','W','B' },
	{ 'B','W','B','W','B','W','B','W' },
	{ 'W','B','W','B','W','B','W','B' },
	{ 'B','W','B','W','B','W','B','W' },
	{ 'W','B','W','B','W','B','W','B' }
};
int main() {
	int N, M;
	cin >> N >> M;
	char board[50][50];
	char copyboard[50][50];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> board[i][j];
			copyboard[i][j] = board[i][j];
		}
	}
	int cnt, min=64;
	for (int i = 0; i < N - 7; i++) {
		for (int j = 0; j < M - 7; j++) {
			cnt = 0;
			
			for (int i2 = i; i2 < i + 8; i2++) {
				for (int j2 = j; j2 < j + 8; j2++) {
					if (board[i2][j2] != white[i2 - i][j2 - j])
						cnt++;
				}
			}
			if (min > cnt)
				min = cnt;
			cnt = 0;
			for (int i2 = i; i2 < i + 8; i2++) {
				for (int j2 = j; j2 < j + 8; j2++) {
					if (board[i2][j2] != black[i2 - i][j2 - j])
						cnt++;
				}
			}
			if (min > cnt)
				min = cnt;
		}
	}

	cout << min;

	system("pause");
	return 0;
}