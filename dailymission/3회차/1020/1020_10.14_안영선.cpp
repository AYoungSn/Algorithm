#include <iostream>
using namespace std;

class StackOfIntegers {
	int primenumber;
public:
	StackOfIntegers() {
		primenumber;
	}
	int getPrimeNumber() {
		return primenumber;
	}
	void setPrimeNumber(int value) {
		primenumber = value;
	}
};

int main()
{
	int num = 2;
	int divisor;
	int count = 0;
	StackOfIntegers prime[100];
	bool check;
	for (int i = 0; num < 120; i++) {
		check = true;
		for (divisor = 2; divisor < num / 2 + 1; divisor++) {
			if (num%divisor == 0)
			{
				check = false;
				break;
			}
		}
		if (check)
			prime[count++].setPrimeNumber(num);
		
		num++;
	}

	for (--count; count>=0; count--) {
		cout << prime[count].getPrimeNumber() << " ";
		if (count % 10 == 0)
			cout << endl;
	}

	system("pause");
	return 0;
}