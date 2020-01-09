#include <iostream>
using namespace std;

int main()
{
	int size;
	cout << "배열 크기 입력: ";
	cin >> size;

	int* list = new int[size];
	int value;
	int cnt = 0;
	cout << size << "개 입력: ";
	for (int i = 0; i < size; i++)
	{
		bool check = false;
		cin >> value;
		for (int j = 0; j < cnt; j++)
		{
			if (list[j] == value)
			{
				check = true;
				break;
			}
		}
		if (!check) {
			list[cnt] = value;
			cnt++;
		}
	}

	for (int i = 0; i < cnt; i++)
		cout << list[i] << " ";



	system("pause");
	return 0;
}