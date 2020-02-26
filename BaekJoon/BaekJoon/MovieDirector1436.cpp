#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int num, cnt = 0;

	for (num = 666; cnt < N; num++) {
		int isc = 0;
		int n = num;
		while (n != 0&&isc!=3) {
			if (n % 10 == 6)
				isc++;
			else if(isc<3)
				isc = 0;
			n /= 10;
		}
		if (isc == 3)
			cnt++;
		if (cnt == N)
			break;
	}
	cout << num;
	
	system("pause");
	return 0;
}