#include <iostream>
using namespace std;

int main()
{
	cout << "�迭 ũ�� �Է�: ";
	int size;
	cin >> size;
	int sum = 0;
	int* list = new int[size];
	cout << "\n���� �Է�: \n";
	for (int i = 0; i < size; i++) {
		cin >> list[i];
		sum += list[i];
	}
	double average = sum / size;
	cout << "���: " << average<<endl;
	int cnt = 0;
	for (int i = 0; i < size; i++) {
		if (average <= list[i]) {
			cnt++;
			cout << list[i] << " ";
		}
	}

	cout << "\n��� �̻� ���� ����: " << cnt << endl;
	system("pause");
	return 0;
}