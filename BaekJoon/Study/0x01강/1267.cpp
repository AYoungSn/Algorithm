#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio();
	cin.tie(NULL); cout.tie(NULL);
	int N, hour[20], ym[2] = { 0,0 };
	cin >> N;
	for (int i = 0; i<N; i++) {
		cin >> hour[i];
		ym[0] += (hour[i] / 30 + 1) * 10;
		ym[1] += (hour[i] / 60 + 1) * 15;
	}
	if (ym[0]>ym[1]) {
		cout << "M " << ym[1];
	}
	else if (ym[0]<ym[1])
		cout << "Y " << ym[0];
	else
		cout << "Y M " << ym[0];

	system("pause");
	return 0;
}