#include <iostream>
using namespace std;

int main() {
	int arr[5], sum = 0;
	for (int i = 0; i<5; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	cout << sum / 5 << "\n";
	for (int i = 0; i<4; i++) {
		int min = arr[i];
		int minind = i;
		for (int j = i + 1; j<5; j++) {
			if (min>arr[j]) {
				min = arr[j];
				minind = j;
			}
		}
		if (minind != i) {
			arr[minind] = arr[i];
			arr[i] = min;
		}
	}
	cout << arr[2];
	system("pause");
	return 0;
}