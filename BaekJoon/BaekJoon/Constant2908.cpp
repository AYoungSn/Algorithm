#include <iostream>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;
	int a, b, c;
	a = A / 100;
	c = A % 10;
	b = A % 100 - c;
	A = c * 100 + b + a;

	a = B / 100;
	c = B % 10;
	b = B % 100 - c;
	B = c * 100 + b + a;

	if (A > B)
		cout << A;
	else
		cout << B;

	system("pause");
	return 0;
}