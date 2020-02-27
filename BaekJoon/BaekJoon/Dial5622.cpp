#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;

	int cnt = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] <= 'C')
			cnt += 3;
		else if (str[i] <= 'F')
			cnt += 4;
		else if (str[i] <= 'I')
			cnt += 5;
		else if (str[i] <= 'L')
			cnt += 6;
		else if (str[i] <= 'O')
			cnt += 7;
		else if (str[i] <= 'S')
			cnt += 8;
		else if (str[i] <= 'V')
			cnt += 9;
		else
			cnt += 10;
	}
	cout << cnt;

	system("pause");
	return 0;
}