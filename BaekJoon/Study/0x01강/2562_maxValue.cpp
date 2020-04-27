#include <iostream>
using namespace std;

int main() {
	int arr[9];
	for (int i = 0; i<9; i++)
		cin >> arr[i];

	int max = arr[0], maxind = 0;
	for (int i = 1; i<9; i++) {
		if (max<arr[i]) {
			max = arr[i];
			maxind = i;
		}
	}
	cout << max << "\n" << maxind+1;

	system("pause");
	return 0;
}