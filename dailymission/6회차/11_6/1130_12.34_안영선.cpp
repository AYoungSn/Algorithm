#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

int main()
{
	vector<int> answer;

	srand (time(0));

	int num1, num2;
	num1 = rand() % 10;
	num2 = rand() % 10;
	if (num1 < num2)
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}
	cout << "What is " << num1 << " - " << num2<<"? ";
	int input;
	cin >> input;
	while (input != num1 - num2)
	{
		if (num1 - num2 != input)
		{
			bool check = false;
			for (int i = 0; i < answer.size(); i++)
			{
				if (input == answer[i])
				{
					cout << "You already entered " << input;
					cout << endl;
					check = true;
					break;
				}
			}
			if (!check)
				answer.push_back(input);
			cout << "Wrong answer. Try again. What is " << num1 << " - " << num2 << "? ";
		}
		cin >> input;
	}
	cout << "You got it!" << endl;
	system("pause");
	return 0;
}