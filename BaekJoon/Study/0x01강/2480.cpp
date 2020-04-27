#include <iostream>
using namespace std;
#define MAX(a,b) (a>b?a:b)

int main() {
	int s[3];
	cin >> s[0] >> s[1] >> s[2];
	int result=0;
	if (s[0] == s[1] && s[1] == s[2]) 
		result=10000 + s[0] * 1000;
	else if (s[0] == s[1] && s[1] != s[2]) 
		result=1000 + s[1] * 100;
	else if ((s[0] == s[2] && s[0] != s[1]) || (s[1] == s[2] && s[1] != s[0]))
		result= 1000 + s[2] * 100;
	else {
		int max = MAX(MAX(s[0], s[1]), s[2]);
		result = max * 100;
	}

	cout << result;
	system("pause");
	return 0;
}