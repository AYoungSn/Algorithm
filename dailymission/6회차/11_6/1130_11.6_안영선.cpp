#include <iostream>
#include <string>
using namespace std;

int* count(const string& s)
{
	int* cnt = new int[10];
	for (int i = 0; i < 10; i++)
		cnt[i] = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= '0'&&s[i] <= '9')
			cnt[s[i] - '0']++;
	}
	return cnt;
}

int main()
{
	int* counts = count("SSN is 343 32 4545 and ID is 434 34 4323");

	for (int i = 0; i < 10; i++)
	{
		cout << i << " : " << *(counts + i)<<endl;
	}

	system("pause");
	return 0;
}