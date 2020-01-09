#include <iostream>
#include <string>
using namespace std;

template<typename T>
void gswap(T &val1, T &val2)
{
	T temp = val1;
	val1 = val2;
	val2 = temp;
}
int main()
{
	int a = 5;
	int b = 7;
	cout << "Before swap value1: " << a << ", value2: " << b << endl;
	gswap(a, b);
	cout << "After swap value1: " << a << ", value2: " << b << endl;
	cout << "---------------------------------\n";
	double c = 2.5;
	double d = 3.8;
	cout << "Before swap value1: " << c << ", value2: " <<d << endl;
	gswap(c, d);
	cout << "After swap value1: " << c << ", value2: " << d << endl;
	cout << "---------------------------------\n";
	string s1 = "Korea";
	string s2 = "World";
	cout << "Before swap value1: " << s1 << ", value2: " << s2 << endl;
	gswap(s1, s2);
	cout << "After swap value1: " <<s1 << ", value2: " << s2 << endl;

	system("pause");
	return 0;
}