#include <iostream>
#include <vector>
using namespace std;

class KiwiJuice {
public:
	vector<int> thePouring(vector<int> capacities,
		vector<int> bottles,
		vector<int> fromId,
		vector<int> toId) {
		for (int i = 0; i < fromId.size(); i++) {
			int capacity = capacities[toId[i]] - bottles[toId[i]];
			if (capacity >= bottles[fromId[i]]) {
				bottles[toId[i]] += bottles[fromId[i]];
				bottles[fromId[i]] = 0;
			}
			else {
				bottles[toId[i]] = capacities[toId[i]];
				bottles[fromId[i]] -= capacity;
			}
		}
		return bottles;
	}
};

