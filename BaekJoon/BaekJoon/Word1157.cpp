#include <iostream>
#include <string>
using namespace std;

int alpha[26];

int main() {
	string W;
	cin >> W;
	
	for (int i = 0; i < W.length(); i++) {
		if (W[i] - 'A' < 26) {
			alpha[W[i] - 'A']++;
		}
		else
			alpha[W[i] - 'a']++;
	}
	int max =alpha[0];
	int maxind = 0;
	for (int i = 0; i < 26; i++) {
		if (max < alpha[i]) {
			max = alpha[i];
			maxind = i;
		}
	}
	bool check = false;
	for(int i=0;i<26;i++)
		if (max == alpha[i] && i != maxind) {
			check = true;
			cout << "?";
			break;
		}
	
	if (!check)
		cout << (char)(maxind+'A');


	system("pause");
	return 0;
}