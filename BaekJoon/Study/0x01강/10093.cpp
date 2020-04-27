#include <iostream>
using namespace std;
#define MAX(a,b) (a>b?a:b)
#define MIN(a,b) (a<b?a:b)
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

	unsigned long long a, b, cnt,big,small;
	cin >> a >> b;
	big = MAX(a, b);
	small = MIN(a, b);
	if (big-small>1) {
		a = MIN(a, b);
		b = MAX(a, b);
		cnt = b - a - 1;
		cout << cnt << "\n";
		a = MIN(a, b) + 1;
		for (unsigned long long i = a; i<b; i++) {
			cout << i << " ";
		}
	}
	else {
		cnt = 0;
		cout << cnt << "\n";

	}

	system("pause");
	return 0;
}