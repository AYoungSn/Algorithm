#include <iostream>
#include <queue>
using namespace std;

int board[50][50], check[50][50];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int T, M,N,K,x,y;
	cin >> T;
	for (int t = 0; t < T; t++) {
		cin >> M >> N >> K;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				board[i][j] = check[i][j] = 0;
			}
		}
		for (int k = 0; k < K; k++) {
			cin >> x >> y;
			board[y][x] = 1;
		}
		int count = 0;
		queue<pair<int, int>> Q;
		while (true) {
			bool find = false;
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < M; j++) {
					if (board[i][j] == 1 && check[i][j] != 1) {
						check[i][j] = 1;
						count++;
						find = true;
						Q.push({ i,j });
						break;
					}
				}
				if (find)break;
			}
			if (!find)break;
			int dx[4] = { 1,0,-1,0 };
			int dy[4] = { 0,1,0,-1 };
			while (!Q.empty()) {
				auto cur = Q.front(); Q.pop();
				for (int i = 0; i < 4; i++) {
					int nx = cur.first + dx[i];
					int ny = cur.second + dy[i];
					if (nx >= 0 && ny >= 0 && nx < N && ny < M && board[nx][ny] == 1 && check[nx][ny] != 1) {
						check[nx][ny] = 1;
						Q.push({ nx,ny });
					}
				}
			}

		}
		cout << count << "\n";
	}
	

	system("pause");
	return 0;
}