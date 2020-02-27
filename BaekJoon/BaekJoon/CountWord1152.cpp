#include <iostream>
#include <string>
using namespace std;

int main() {
	string S;
	getline(cin, S);

	int cnt = 0;
	int	n = (S[0] == ' ') ? 1 : 0;
	int length = S[S.length() - 1] == ' ' ? S.length() - 1 : S.length();

	for (int i = n; i < length; i++) {
		if (S[i] == ' ')
			cnt++;
	}
	if (length == 0)
		cnt = -1;
	cout << cnt + 1;

	system("pause");
	return 0;
}