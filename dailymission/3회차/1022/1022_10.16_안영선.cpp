#include <iostream>
using namespace std;
class StackOfIntegers {
public:
	StackOfIntegers();
	bool isEmpty() const;
	int peek() const;
	void push(int value);
	int pop();
	int getSize() const;
private:
	int elements[100];
	int size;
};
StackOfIntegers::StackOfIntegers() {
	size = 0;
}
bool StackOfIntegers::isEmpty() const {
	return size == 0;
}
int StackOfIntegers::peek() const {
	return elements[size - 1];
}
void StackOfIntegers::push(int value) {
	elements[size++] = value;
}
int StackOfIntegers::pop() {
	return elements[--size];
}
int StackOfIntegers::getSize() const {
	return size;
}
int main()
{
	int number;
	cin >> number;

	int divisor = 2;
	bool check;

	StackOfIntegers prime;

	for (int i = 2; i <= number; i++) {
		check = true;
		divisor = 2;
		while (i < divisor) {
			if (i%divisor == 0) {
				check = false;
				break;
			}
			divisor++;
		}
		if (check) {
			while (number%i == 0) {
				prime.push(i);
				number /= i;
			}
		}
	}
	int size = prime.getSize();
	for(int i=0;i<size;i++)
		cout << prime.pop() << " ";


	system("pause");
	return 0;
}