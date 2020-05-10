#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio;
	cin.tie(NULL); cout.tie(NULL);
	string A, B, C;
	cin >> A >> B >> C;
	string ss = to_string(stoi(A) * stoi(B)*stoi(C));
	cout << ss<<" "<<ss.length()<<"\n";
	int num[10];
	for (int i = 0; i < 10; i++)
		num[i]=0;
	for (int i = 0; i < ss.length(); i++) {
		int index = ss[i]-'0';
		num[index]++;
	}
	for (int i = 0; i < 10; i++)
		cout << num[i] << "\n";
	system("pause");
	return 0;
}