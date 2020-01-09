#include <iostream>
#include <string>
using namespace std;

template<typename T>
int binarySearch(const T list[], T key,int listSize)
{
	int low = 0;
	int high = listSize - 1;
	while (high >= low)
	{
		int mid = (low + high) / 2;
		if (key < list[mid])
			high = mid - 1;
		else if (key == list[mid])
			return mid;
		else
			low = mid + 1;
	}
	return -low - 1;
}
template<typename T>
void selectionSort(T list[], int size)
{
	for (int i = 0; i < size-1; i++)
	{
		T currentMin = list[i];
		int minIndex = i;
		for (int j =i+1; j < size; j++)
		{
			if (currentMin > list[j])
			{
				currentMin = list[j];
				minIndex = j;
			}
		}
		if (minIndex != i)
		{
			list[minIndex] = list[i];
			list[i] = currentMin;
		}
	}
}
template<typename T>
void printarray(const T list, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << list[i] << " ";
	}
	cout << endl;
}
int main()
{
	int list[] = { 2,4,3,8,9,6,7,1,5,0 };
	double dlist[] = { 1.5,2.4,3.6,9.5, 12.3,7.4,3.5,4.2,8.2,6.3 };
	string slist[] = { "Seoul","Busan","Rome","Europe" };
	selectionSort(list, 10);
	selectionSort(dlist, 10);
	selectionSort(slist, 4);
	printarray(list, 10);
	printarray(dlist, 10);
	printarray(slist, 4);

	cout <<"search 5: "<< binarySearch(list, 5, 10)<<endl;
	cout << "search 12.3: " << binarySearch(dlist, 12.3, 10) << endl;
	cout << "search \"Rome\": " << binarySearch(slist, string("Rome"), 4)<<endl;



	system("pause");
	return 0;
}