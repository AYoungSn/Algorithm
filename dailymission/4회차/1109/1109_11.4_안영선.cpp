#include <iostream>
using namespace std;

int average(const int* array, int size);
double average(const double* array, int size);

int main()
{
	int size;
	cout << "크기 입력: ";
	cin >> size;
	double* list= new double[size];

	cout << size<<"개의 실수 값 입력: ";
	for (int i = 0; i < size; i++)
		cin >> list[i];

	cout << "평균: " << average(list, size) << endl;
	delete[] list;
	
	system("pause");
	return 0;
}
int average(const int* array, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += *(array + i);
	}
	return sum / size;
}
double average(const double* array, int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += *(array + i);
	}
	return sum / size;
}