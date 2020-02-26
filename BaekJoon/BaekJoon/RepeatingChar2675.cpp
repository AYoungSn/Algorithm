#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	cin >> T;
	int R[1000];
	string S[1000];
	for (int i = 0; i < T; i++) {
		cin >> R[i] >> S[i];
	}
	for (int i = 0; i < T; i++) {
		for (int j = 0; j < S[i].length(); j++) {
			for (int k = 0; k < R[i]; k++) {
				cout << S[i][j];
			}
		}
		cout << "\n";
	}

	system("pause");
	return 0;
}