#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class InterestingParty {
public:
	int bestInvitation(vector <string> first, vector<string> second)
	{
		vector<int> cnt1;
		vector<int> cnt2;
		int max = 1;
		for (int i = 0; i < first.size(); i++) {
			cnt1[i] = 0;
			cnt2[i] = 0;
			for (int j = i,k=0; j < first.size(); j++,k++) {
				if (first[i] == first[j])cnt1[i]++;
				if (second[i] == second[j])cnt2[i]++;
				if (first[i] == second[k]&&i!=k)cnt1[i]++;
				if (second[i] == first[k] && i != k)cnt2[i]++;
			}
			
			if (max < cnt1[i])max = cnt1[i];
			if (max < cnt2[i])max = cnt2[i];
		}
		
		
		
		return max;
	}
};