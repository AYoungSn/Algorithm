#include <iostream>
#include <string>
using namespace std;

template<typename T>
bool isSorted(const T list[], int size)
{
	//오름차순 정렬인가
	bool check = true;
	for (int i = 0; i < size - 1; i++)
	{
		if (list[i] > list[i + 1])
		{
			check = false;

		}
	}
	if (check)
		return true;
	check = true;
	for (int i = 0; i < size - 1; i++)
	{
		if (list[i] < list[i + 1])
		{
			check = false;

		}
	}
	if (check)
		return true;
	return false;
}
template<typename T>
void sort(T list[],int size)
{
	for (int j = 0; j < size-1; j++)
	{
		T min = list[j];
		int minIndex = j;
		for (int i = j+1; i < size; i++)
		{
			if (min > list[i])
			{
				min = list[i];
				minIndex = i;
			}
		}
		if (minIndex != j)
		{
			list[minIndex] = list[j];
			list[j] = min;

		}
	}
}
template<typename T>
void printArray(T list[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << list[i] << " ";
	}
	cout << endl;
}
int main()
{
	int list1[] = { 10,9,8,7,6,5,4,3,2,1 };
	double list2[] = { 1.2,3.5,2.4,6.8,2.1,2.4 };
	string list3[] = { "Seoul","Korea","Ahn","C++" };

	cout << "int type 정렬체크: " << isSorted(list1, 10) << endl;
	cout << "double type 정렬체크: " << isSorted(list2, 6) << endl;
	cout << "string type 정렬체크: " << isSorted(list3, 4) << endl;

	sort(list1, 10);
	sort(list2, 6);
	sort(list3, 4);
	printArray(list1, 10);
	printArray(list2, 6);
	printArray(list3, 4);

	cout << "int type 정렬체크: " << isSorted(list1, 10) << endl;
	cout << "double type 정렬체크: " << isSorted(list2, 6) << endl;
	cout << "string type 정렬체크: " << isSorted(list3, 4) << endl;

	system("pause");
	return 0;
}