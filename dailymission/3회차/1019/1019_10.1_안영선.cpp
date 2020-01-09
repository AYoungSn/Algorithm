#include <iostream>
#include <string>
using namespace std;

bool isAnagram(const string& s1, const string& s2)
{
	int a = s1.length();
	int b = s2.length();

	if (a != b)
		return false;

	bool check[26] = { false };
	
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (s1[i] == s2[j]) {
				check[i] = true;
				break;
			}
		}
	}
	for (int i = 0; i < a; i++)
		if (!check[i])
			return false;
	return true;
}

int main()
{
	string s1, s2;
	cout << "Enter a string s1: ";
	cin>> s1;
	cout << "Enter a string s2: ";
	cin >> s2;

	isAnagram(s1, s2) ? cout << s1 << " and " << s2 << " are anagrams\n" : cout << s1 << " and " << s2 << " are not anagrams\n";

	system("pause");
	return 0;
}