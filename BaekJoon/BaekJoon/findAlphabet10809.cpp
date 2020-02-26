#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;

	bool isfind = false;
	for (char find = 'a'; find <= 'z';find++) {
		isfind = false;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == find) {
				cout << i << " ";
				isfind = true;
				break;
			}
		}
		if (!isfind) {
			cout << -1 << " ";
		}
	}

	system("pause");
	return 0;
}