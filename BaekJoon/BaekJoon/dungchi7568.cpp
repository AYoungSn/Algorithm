#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int D[50][2];
	int rank[50];
	for (int i = 0; i < N; i++) {
		cin >> D[i][0] >> D[i][1];
		rank[i] = 1;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (D[i][0] > D[j][0] && D[i][1] > D[j][1]) {
				rank[j]++;
			}
		}
	}
	
	for (int i = 0; i < N; i++)
		cout << rank[i] << " ";


	return 0;
}