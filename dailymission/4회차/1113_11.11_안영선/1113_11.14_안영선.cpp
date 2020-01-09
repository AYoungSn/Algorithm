#include <iostream>
using namespace std;

class MyString {
public:
	MyString() {

	}MyString(const char* cString) {
		for (int i = 0; cString[i] != '\0'; i++)
			c[i] = cString[i];
	}const char at(int index) {
		return c[index];
	}const int length() {
		int size = 0;
		for (int i = 0; c[i] != '\0'; i++)
			size++;
		return size;
	}void clear() {
		for (int i = 0; i < length(); i++) {
			c[i] = NULL;
		}
	}const bool empty() {
		return length() != 0;
	}const int compare(const MyString& s) {
		int sum1(0), sum2(0);
		for (int i = 0; i < length(); i++) {
			sum1 += c[i];
			sum2 += at(i);
		}
		if (sum1 < sum2)
			return -1;
		else if (sum1 > sum2)
			return 1;
		else if (sum1 == sum2) {
			if (this->length() == length())
				return 0;
			else if (this->length() > length())
				return 1;
			else
				return -1;
		}
	}void copy(char s[], int index, int n) {
		//알수 없음
	}const char* data() {
		c[length()] = '\0';
		return c;
	}const int find(char ch) {
		for (int i = 0; i < length(); i++)
			if (c[i] == ch)
				return i;
		return 'npos';
	}const int find(char ch, int index) {
		for (index; index < length(); index++)
			if (c[index] == ch)
				return index;
		return 'npos';
	}const int find(const MyString& s, int index) {
		bool same = true;
		for (int i=index; i < this->length()-index; i++) {
			if(c[i]==at(0)){
				for (int j = i; j < i + length(); j++) {
					if (c[j] != at(j))
						same = false;
				}
				if (same)
					return i;
			}
		}
		return 'npos';
	}
	
private:
	char c[];
};

int main()
{





	system("pause");
	return 0;
}