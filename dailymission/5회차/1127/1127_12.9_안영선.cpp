#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<typename T>
class Stack {
public:
	Stack() {
		size = 0;
	}bool empty() const {
		return size == 0;
	}T peek()const {
		return elements[size - 1];
	}void push(T value) {
		elements.push_back(value);
		size++;
	}T pop() {
		return elements[--size];
	}int getSize()const {
		return size;
	}void printStack() {
		while (!empty())
			cout << pop() << " ";
		cout << endl;
	}
private:
	vector<T> elements;
	int size;
};

int main()
{




	system("pause");
	return 0;
}