#include <iostream>
using namespace std;

class EvenNumber {
public:
	EvenNumber() {
		value = 0;
	}
	EvenNumber(int value) {
		this->value = value;
	}
	int getValue() {
		return value;
	}
	int getNext() {
		return value + 2;
	}
	int getPrevious() {
		return value - 2;
	}
private:
	int value;
};
int main()
{
	EvenNumber en(16);

	cout << en.getPrevious() << " "<<en.getValue()<<" " << en.getNext();

	system("pause");
	return 0;
}