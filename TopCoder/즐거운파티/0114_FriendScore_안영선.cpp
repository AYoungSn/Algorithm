#include <string>
#include <vector>
using namespace std;

class FriendScore {
public:
	int highestScore(vector<string> friends) {
		int max=0;
		for (int i = 0; i < friends.size(); i++) {
			int cnt=0;
			for (int j = 0; j < friends.size(); j++) {
				if (i == j)continue;
				if (friends[i][j] == 'Y')cnt++;
				else {
					for (int k = 0; k < friends.size(); j++) {
						if (friends[k][i] == 'Y'&&friends[j][k] == 'Y') {
							cnt++;
							break;
						}
					}
				}
			}
			if (max < cnt)
				max = cnt;
		}
		return max;
	}
};