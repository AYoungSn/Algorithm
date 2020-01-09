#include <iostream>
#include <string>
using namespace std;

template<typename T>
int linearSearch(const T list[], T key, int arraySize)
{
	for (int i = 0; i < arraySize; i++) {
		if (key == list[i])
			return i;
	}
	return -1;
}

int main()
{
	int list[] = { 5,2,8,6,12,43,21,9 };
	double dlist[] = { 5.1,2.1,1.5,3.8,45.2,3.9,12.6,0.7 };
	string slist[] = { "Atlanta","Denver","Chicago","Dallas" };

	cout << linearSearch(list, 6, 8) << endl
		<< linearSearch(dlist, 0.7, 8) << endl
		<< linearSearch(slist, string("Denver"), 4) << endl;


	system("pause");
	return 0;
}