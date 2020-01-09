#include <iostream>
#include <ctime>
//#include 
using namespace std;

class StopWatch {
public:
	StopWatch() {
		start();
	}
	int getStartTime(){
		return startTime;
	}
	int getEndTime(){
		return endTime;
	}
	void start() {
		startTime = time(0);
	}
	void stop() {
		endTime = time(0);
	}
	int getElapsedTime() {
		return endTime - startTime;
	}
private:
	int startTime, endTime;
};
void setList(int list[],const int a);
void sortedList(int list[],const int a);
int main()
{
	const int n = 100000;
	int list[n];
	setList(list, n);
	StopWatch t;
	sortedList(list, n);

	t.stop();
	cout << "실행시간: " << t.getElapsedTime();
	system("pause");
	return 0;
}
void setList(int list[],const int n) {
	srand(time(0));
	for (int i = 0; i < n; i++)
		list[i] = rand() % 100;
}
void sortedList(int list[],const int a) {
	for (int i = 0; i < a; i++) {
		int min = list[i];
		int minIndex = i;
		for (int j = i + 1; j < a; j++) {
			if (min > list[j]) {
				min = list[j];
				minIndex = j;
			}
		}
		if (min != list[i]) {
			list[minIndex] = list[i];
			list[i] = min;
		}
	}
}