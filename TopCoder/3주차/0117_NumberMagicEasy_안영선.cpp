#include <string>
using namespace std;

class NumberMagicEasy {
public:
	int theNumber(string answer) {
		string c[] = {
			"YYYY",
			"YYYN",
			"YYNY",
			"YYNN",
			"YNYY",
			"YNYN",
			"YNNY",
			"YNNN",
			"NYYY",
			"NYYN",
			"NYNY",
			"NYNN",
			"NNYY",
			"NNYN",
			"NNNN"
		};
		for (int i = 0; i < 15; i++)
			if (answer == c[i])return i + 1;
		return 0;
	}
};
