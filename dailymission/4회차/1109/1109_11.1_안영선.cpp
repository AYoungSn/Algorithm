#include <iostream>
using namespace std;

int main()
{
	cout << "배열 크기 입력: ";
	int size;
	cin >> size;
	int sum = 0;
	int* list = new int[size];
	cout << "\n숫자 입력: \n";
	for (int i = 0; i < size; i++) {
		cin >> list[i];
		sum += list[i];
	}
	double average = sum / size;
	cout << "평균: " << average<<endl;
	int cnt = 0;
	for (int i = 0; i < size; i++) {
		if (average <= list[i]) {
			cnt++;
			cout << list[i] << " ";
		}
	}

	cout << "\n평균 이상 숫자 개수: " << cnt << endl;
	system("pause");
	return 0;
}