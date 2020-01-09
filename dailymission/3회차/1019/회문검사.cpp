#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& s1) {
	int a;
	/*while (s1[a] != '\0') {
		a++;
	}*/
	for (a = 0; a < s1[a] != '\0'; a++) {}

	for (int i = 0; i < a/2+1; i++) {
		if (s1[i] != s1[--a])
			return false;
		
	}
	return true;
}

int main() {
	//회문검사
	string s;
	cin >> s;

	if (isPalindrome(s))
		cout << "is Palindrome\n";
	else
		cout << "is not Palindrome\n";

	system("pause");
	return 0;
}