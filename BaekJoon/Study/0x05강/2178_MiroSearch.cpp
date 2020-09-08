#include <iostream>
#include <queue>
using namespace std;

int dist[102][102];
string board[102];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int N, M, i, j;
	cin >> N >> M;
	
	for (i = 0; i < N; i++)
		cin >> board[i];

	for (i = 0; i < N; i++)
		fill(dist[i], dist[i] + M, -1);

	queue<pair<int, int>> Q;
	int dx[4] = { 1,0,-1,0 };
	int dy[4] = { 0,1,0,-1 };
	Q.push({ 0,0 });
	dist[0][0] = 0;//방문 표시

	while (!Q.empty()) {
		auto cur = Q.front(); Q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];

			if (nx >= 0 && ny >= 0 && nx < N && ny < M
				&& dist[nx][ny] < 0 && board[nx][ny] == '1') {
				dist[nx][ny] = dist[cur.first][cur.second] + 1;
				Q.push({ nx,ny });
			}
		}
	}
	cout << (dist[N-1][M-1]+1);

	system("pause");
	return 0;
}