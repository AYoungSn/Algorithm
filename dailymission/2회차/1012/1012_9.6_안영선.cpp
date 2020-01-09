#include <iostream>
using namespace std;

class  QuadraticEquation {
	int a, b, c;
public:
	QuadraticEquation(int a, int b,int c) {
		this->a = a;
		this->b = b;
		this->c= c;
	}
	double getDiscriminant() {
		return b * b - 4 * a*c;
	}
	double getRoot1() {
		return (-b + sqrt(getDiscriminant())) / 2 * a;
	}
	double getRoot2() {
		return (-b - sqrt(getDiscriminant())) / 2 * a;
	}
};
int main() {
	cout << "a, b, c ют╥б: ";
	int a, b, c;
	cin >> a >> b >> c;

	QuadraticEquation q(a, b, c);

	if (q.getDiscriminant() > 0)
		cout << q.getRoot1() << ", " << q.getRoot2();
	else if (q.getDiscriminant() == 0)
		cout << "0";
	else
		cout << "The equation has no real roots\n";
	system("pause");
	return 0;
}