#include <iostream>
#include <queue>
using namespace std;

int K, W, H;
int map[200][200];
bool visit[200][200][31];
int mx[] = { 1,0,-1, 0 };
int my[] = { 0,1, 0,-1 };

int hx[] = { 1, 2, 2, 1,-1,-2,-2,-1 };
int hy[] = { 2, 1,-1,-2,-2,-1, 1, 2 };

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	cin >> K >> W >> H;
	for (int h = 0; h < H; h++)
		for (int w = 0; w < W; w++)
			cin >> map[h][w];
	queue<pair<pair<int, int>,pair<int, int>>> Q;
	//{ { x, y }, { ÀÌµ¿ È½¼ö, ´É·Â »ç¿ë È½¼ö } }
	Q.push({ { 0,0 },{0,0} });
	visit[0][0][0] = true;
	while (!Q.empty()) {
		auto cur = Q.front(); Q.pop();
		if (cur.first.first == H - 1 && cur.first.second == W - 1) {
			cout << cur.second.first;
			system("pause");
			return 0;
		}
		for (int i = 0; i < 4; i++) {
			int nx = mx[i] + cur.first.first;
			int ny = my[i] + cur.first.second;
			if (nx >= 0 && ny >= 0 && nx < H && ny < W
				&& map[nx][ny] == 0 && !visit[nx][ny][cur.second.second]) {
				Q.push({ {nx,ny},{cur.second.first + 1, cur.second.second} });
				visit[nx][ny][cur.second.second] = true;
			}
		}
		if (cur.second.second < K) {
			for (int i = 0; i < 8; i++) {
				int nx = hx[i] + cur.first.first;
				int ny = hy[i] + cur.first.second;
				if (nx >= 0 && ny >= 0 && nx < H && ny < W && cur.second.second + 1 <= K
					&& map[nx][ny] == 0 && !visit[nx][ny][cur.second.second + 1]) {
					Q.push({ {nx, ny},{cur.second.first + 1, cur.second.second + 1} });
					visit[nx][ny][cur.second.second + 1] = true;
				}
			}
		}
	}
	cout << -1;

	system("pause");
	return 0;
}