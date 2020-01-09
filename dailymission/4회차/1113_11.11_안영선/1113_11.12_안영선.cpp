#include <iostream>
#include <ctime>
using namespace std;

class MyDate {
public:
	MyDate() {
		setDate(time(0));
	}
	MyDate(long long s) {
		setDate(s);
	}
	MyDate(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}
	const int getYear() {
		return year;
	}const int getMonth() {
		return month;
	}const int getDay() {
		return day;
	}void setYear(int y) {
		year = y;
	}void setMonth(int m) {
		month = m;
	}void setDay(int d) {
		day = d;
	}void setDate(long long elapseTime) {

		year = 1970 + (((elapseTime / 60) / 60) / 24) / 365;
		int totalDays = 1 + ((((elapseTime / 60) / 60) + 9) / 24);
		int daySum = 0, last = 0;
		for (int d = 1970; daySum <= totalDays; d++) {
			if (isLeapyear(d)) {
				daySum += 366;
				last = 366;
			}
			else {
				daySum += 365;
				last = 365;
			}
		}
		totalDays -= (daySum - last);

		int sum = 0, cnt = 0;
		for (int m = 1; sum <= totalDays; m++)
		{
			if (m == 1 || m == 3 || m == 5 || m == 7 ||
				m == 8 || m == 10 || m == 12) {
				sum += 31;
				cnt++;
				last = 31;
			}
			if (m == 4 || m == 6 || m == 9 || m == 11) {
				sum += 30;
				cnt++;
				last = 30;
			}
			if (m == 2) {
				sum += isLeapyear(year) ? 29 : 28;
				cnt++;
				last = isLeapyear(year) ? 29 : 28;;
			}
		}
		month = cnt;
		day = totalDays - (sum - last);
	}
	bool isLeapyear(int year)
	{
		return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
	}
private:
	int year, month, day;
};

int main()
{
	MyDate d1;

	MyDate d2(3435555513);

	cout << d1.getYear() << "년 " << d1.getMonth() << "월 " << d1.getDay() << "일\n";
	cout << d2.getYear() << "년 " << d2.getMonth() << "월 " << d2.getDay() << "일\n";

	system("pause");
	return 0;
}