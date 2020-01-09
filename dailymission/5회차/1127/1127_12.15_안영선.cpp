#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	string ss;
	getline(cin, ss);
	bool check = true;
	stack<char> sta;
	for (int i = 0; i < ss.size(); i++){
		if (ss[i] == '(' || ss[i] == '{' || ss[i] == '['){
			sta.push(ss[i]);
		}else if (ss[i] == ')' || ss[i] == '}' || ss[i] == ']'){
			switch (sta.top()){
			case '(':
				if (ss[i] == ')')
				break;
			case '{':
				if (ss[i] == '}')
				break;
			case '[':
				if (ss[i] == ']')
				break;
			default:
				check = false;
				break;
			}
		}
		if (!check)
			break;
	}
	if (check)
		cout << "Valid" << endl;
	else
		cout << "inValid" << endl;

	system("pause");
	return 0;
}