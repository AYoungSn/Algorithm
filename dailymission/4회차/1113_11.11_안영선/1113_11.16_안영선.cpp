#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string sort(string& s) {
	char* ch = new char[s.length()];
	for (int i = 0; i < s.length(); i++)
		*(ch+i) = s.at(i);

	sort(ch, ch+s.length());
	string str;
	str.clear();
	str = ch;
	return str;
}

int main()
{
	cout << "Enter a string s:";
	string s;
	cin >> s;
	
	cout << "The sorted string is "<<sort(s);


	system("pause");
	return 0;
}