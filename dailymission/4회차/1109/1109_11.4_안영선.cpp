#include <iostream>
using namespace std;

int average(const int* array, int size);
double average(const double* array, int size);

int main()
{
	int size;
	cout << "ũ�� �Է�: ";
	cin >> size;
	double* list= new double[size];

	cout << size<<"���� �Ǽ� �� �Է�: ";
	for (int i = 0; i < size; i++)
		cin >> list[i];

	cout << "���: " << average(list, size) << endl;
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