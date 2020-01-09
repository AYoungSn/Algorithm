#include <iostream>
#include <vector>
using namespace std;

bool isConsecutiveFour(const vector<int>& values)
{
	for (int i = 0; i < values.size()-3; i++)
	{
		if (values[i] == values[i + 1] && values[i + 1] == values[i + 2] && values[i + 2] == values[i + 3])
			return true;
	}
	return false;
}

int main()
{
	cout << "Enter the number of values: ";
	int size;
	cin >> size;
	cout << "Enter the values: ";
	vector<int> values(size);
	for (int i = 0; i < size; i++)
		cin >> values[i];

	if (isConsecutiveFour(values))
		cout << "The list has consecutive fours\n";
	else
		cout << "The list has no consecutive fours\n";

	system("pause");
	return 0;
}