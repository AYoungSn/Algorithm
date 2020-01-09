#include <iostream>
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
		elements[size++] = value;
	}T pop() {
		return elements[--size];
	}int getSize()const {
		return size;
	}void printStack() {
		while (!empty())
			cout << pop() << " ";
		cout << endl;
	}
	bool contains(T element) {
		for (int i = 0; i < size; i++) {
			if (elements[i] == element)
				return true;
		}
		return false;
	}
private:
	T elements[100];
	int size;
};

int main()
{
	Stack<int> intStack;
	for (int i = 0; i < 10; i++)
		intStack.push(i);
	cout<<intStack.contains(5);

	if (!intStack.empty())
		intStack.printStack();


	system("pause");
	return 0;
}