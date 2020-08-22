#include <iostream>
#include <queue>
using namespace std;

int box[1001][1001];
bool visit[1001][1001];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int M, N, day=0;
	cin >> M >> N;
	//M:¿­

	queue<pair<int,int>> Q;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++) {
			cin >> box[i][j];
			visit[i][j] = false;
			if (box[i][j] == 1) {
				Q.push({ i,j });
				visit[i][j] = true;
			}
		}

	int dx[4] = { 1,0,-1,0 };
	int dy[4] = { 0,1,0,-1 };
	while (!Q.empty()) {
		int size = Q.size();
		for (int s = 0; s < size; s++) {
			auto cur = Q.front(); Q.pop();
			for (int i = 0; i < 4; i++) {
				int nx = cur.first + dx[i];
				int ny = cur.second + dy[i];
				if (nx >= 0 && ny >= 0 && nx < N && ny < M &&
					!visit[nx][ny] && box[nx][ny] == 0) {
					Q.push({ nx,ny });
					visit[nx][ny] = true;
					box[nx][ny] = 1;
				}
			}
		}
		day++;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (box[i][j] == 0) {
				cout << -1;
				return 0;
			}
		}
	}
	cout << day-1;
	system("pause");
	return 0;
}