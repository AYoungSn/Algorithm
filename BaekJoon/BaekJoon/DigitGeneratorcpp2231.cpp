#include <iostream>
using namespace std;

int M[1000001];

int main() {
	int N;
	cin >> N;
	for (int i = 1; i<=N; i++) {
		int sum = i;
		int n = i;
		while (n != 0) {
			sum += n % 10;
			n /= 10;
		}
		if (M[sum] == 0 || M[sum] > i)
			M[sum] = i;
	}
	cout << M[N];

	system("pause");
	return 0;
}