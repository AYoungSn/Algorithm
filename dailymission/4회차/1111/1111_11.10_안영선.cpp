#include <iostream>
#include <string>
using namespace std;

int* count(const string& s)
{
	int* cnt = new int[26];
	for (int i = 0; i < 26; i++)
		cnt[i] = 0;
	for (int i = 0; i < 26; i++)
	{
		if (s[i] == '\0')
			break;
		else if(s[i]-'A'<26) cnt[s[i] - 'A']++;
		else if(s[i]-'a'<26) cnt[s[i] - 'a']++;
	}
	return cnt;
}
int main()
{
	cout << "문자열 입력: ";
	string str;
	getline(cin, str);
	int *counts = count(str);
	for (int i = 0; i < 26; i++){
		if (*(counts + i) != 0)
			cout << static_cast<char>( i + 'a') << ": " << *(counts + i) << " times\n";
	}
	
	system("pause");
	return 0;
}