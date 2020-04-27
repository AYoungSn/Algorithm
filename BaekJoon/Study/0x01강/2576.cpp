#include <iostream>
using namespace std;

int main() {
	int arr[7], sum = 0, min;
	for (int i = 0; i<7; i++) {
		cin >> arr[i];
		if (arr[i] % 2 != 0) {
			sum += arr[i];
			min = arr[i];
		}
		else arr[i] = -1;
	}
	if (sum == 0) {
		cout << -1;
	}
	else {
		cout << sum << "\n";
		for (int i = 0; i<7; i++) {
			if (min>arr[i] && arr[i]>0) {
				min = arr[i];
			}
		}
		cout << min;
	}
	system("pause");
	return 0;
}