#include <iostream>
using namespace std;

int* doubleCapacity(const int* list, int size)
{
	int* m = new int[size * 2];
	for (int i = 0; i < size; i++)
	{
		m[i] = list[i];
	}
	for (int s = size; s < size * 2; s++)
		m[s] = 0;
	return m;
}

int main()
{
	const int SIZE = 10;
	int list[] = { 2,6,8,5,4,7,6,9,3,1 };
	/*list[11] = 4;
	cout << list[11];*/
	//cout << list[10];
	
	int* p = doubleCapacity(list, 10);

	for (int i = 0; i < SIZE*2 ; i++)
		cout << p[i]<<" ";
	
	

	system("pause");
	return 0;
}