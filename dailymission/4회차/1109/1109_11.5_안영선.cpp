#include <iostream>
using namespace std;

int min(const int* m, int size)
{
	int min = *m;
	for (int i = 1; i < size; i++)
	{
		if (min > *(m + i))
			min = *(m + i);
	}
	return min;
}

int main()
{
	int list[] = { 1,2,4,5,10,100,2,-22 };

	cout << "가장 작은 요소: " << min(list, 8)<<endl;

	system("pause");
	return 0;
}