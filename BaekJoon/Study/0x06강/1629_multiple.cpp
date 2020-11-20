#include <iostream>
using namespace std;

int C;

long long multiple(int n, int k)
{
	if (k == 1)
		return (n);
	long long temp = multiple(n, k / 2);
	long long  result = temp * temp % C;
	if (k % 2 == 1) result = result * n % C;
	return result;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int A, B;

	cin >> A >> B >> C;
	cout << multiple(A % C, B) << "\n";
	system("pause");
	return (0);
}