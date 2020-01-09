#include <vector>
#include <algorithm>
using namespace std;

class BadNeighbors {
public:
	int maxDonations(vector<int> donations) {
		int sum1 = 0,
			sum2 = 0;
		for (int i = 0; i < donations.size(); i++)
		{
			if (i%2==0&&i!=donations.size()-1)sum1 += donations[i];
			if (i % 2 != 0) sum2 += donations[i];
		}
		return max(sum1, sum2);
	}
};