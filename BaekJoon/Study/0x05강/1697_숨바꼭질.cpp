#include <iostream>
#include <queue>
using namespace std;

int board[100001];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

	for (int i = 0; i < 100001; i++)
		board[i] = 0;
	int N, K;
	cin >> N >> K;
	queue<int> Q;
	Q.push(N);
	board[N] = 1;
	int time = 0,cur;
	while (1) {
		int size = Q.size();
		for (int s = 0; s < size; s++) {
			cur = Q.front(); Q.pop();
			if (cur == K)
				break;
			if (cur > 0 && board[cur - 1] == 0) {
				Q.push(cur - 1);
				board[cur - 1] = 1;
			}
			if (cur < 100000 && board[cur + 1] == 0) {
				Q.push(cur + 1);
				board[cur + 1] = 1;
			}
			if (cur * 2 <= 100000 && board[cur * 2] == 0) {
				Q.push(cur * 2);
				board[cur * 2] = 1;
			}
		}
		if (cur == K)break;
		time++;
	}
	cout << time;

	system("pause");
	return 0;
}