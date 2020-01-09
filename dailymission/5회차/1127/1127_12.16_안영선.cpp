#include <iostream>
#include <stack>
#include <string>
using namespace std;



int main()
{
	cout << "후위 표기 수식을 입력: ";
	string ss;
	getline(cin,ss);

	int val;
	stack<int> st;
	for (int i = 0; i < ss.size(); i++) {
		if (ss[i] == 0)
			i++;
		if (ss[i] >= 48 && ss[i] <= 57)
			st.push(ss[i] - 48);
		if (ss[i] == '+' || ss[i] == '-' || ss[i] == '*' || ss[i] == '/')
		{
			val = st.top();
			st.pop();
			switch (ss[i]) {
			case '+':
				val += st.top();
				break;
			case '-':
				val -= st.top();
				break;
			case '*':
				val *= st.top();
				break;
			case '/':
				val /= st.top();
				break;
			}
			st.pop();
			st.push(val);

		}
	}


	cout << "후위 표기법으로 계산한 값: " << st.top();

	system("pause");
	return 0;
}