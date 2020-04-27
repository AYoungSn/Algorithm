#include <iostream>
using namespace std;

int main() {
	int sum=0,arr[9];
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	sum -= 100;
	
	for (int i = 0; i < 8; i++) {
		if (sum < arr[i])continue;
		int liar = arr[i];
		for (int j = i + 1; j < 9; j++) {
			if (sum == liar + arr[j]) {
				arr[i] = arr[j] = -1;
				break;
			}
		}
		if (arr[i] == -1)break;
	}
	for (int i = 0; i < 8; i++) {
		int min = arr[i];
		int minind = i;
		for (int j = i; j < 9; j++) {
			if (min > arr[j]) {
				min = arr[j];
				minind = j;
			}
		}
		if (minind != i) {
			arr[minind] = arr[i];
			arr[i] = min;
		}
	}
	for (int i = 2; i < 9; i++) {
		cout << arr[i] << "\n";
	}
	system("pause");
}