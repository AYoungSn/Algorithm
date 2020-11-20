#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int R, C;
string lake[1500];
bool water[1500][1500];
bool swan[1500][1500];
int dx[] = { 1,0,-1,0 };
int dy[] = { 0,1,0,-1 };

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

	queue<pair<int, int>> Q1, Q2;
	pair<int, int> Swan;
	cin >> R >> C;
	for (int i = 0; i < R; i++) {
		cin >> lake[i];
		for (int j = 0; j < C; j++) {
			if (lake[i][j] == 'L') {
				Swan = { i,j };
			}
			if (lake[i][j] !='X') {
				water[i][j] = true;
				Q2.push({ i,j });
			}
		}
	}

	while(1){
		int day = 0;
		Q1.push({ Swan.first, Swan.second });
		swan[Swan.first][Swan.second] = true;

		while (!Q1.empty()) {
			auto cur = Q1.front(); Q1.pop();
			for (int i = 0; i < 4; i++) {
				int nx = dx[i] + cur.first;
				int ny = dy[i] + cur.second;
				if (nx >= 0 && ny >= 0 && nx < R && ny < C
					&& !swan[nx][ny] && lake[nx][ny] != 'X') {
					if (lake[nx][ny] == 'L') {
						cout << day;
						return 0;
					}
					swan[nx][ny] = true;
					Q1.push({ nx,ny });
				}
			}
		}
		auto size = Q2.size();
		for (auto s = 0; s < size; s++) {
			auto cur = Q2.front(); Q2.pop();
			for (int i = 0; i < 4; i++) {
				int nx = dx[i] + cur.first;
				int ny = dy[i] + cur.second;
				if (nx >= 0 && ny >= 0 && nx < R && ny < C
					&& !water[nx][ny] && lake[nx][ny] == 'X') {
					lake[nx][ny] = '.';
					water[nx][ny] = true;
					Q2.push({ nx,ny });
				}
			}
		}
		day++;
	}
	return 0;
}