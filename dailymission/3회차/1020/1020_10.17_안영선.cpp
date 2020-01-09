#include <iostream>
using namespace std;

const int ROW_SIZE = 3;
const int COL_SIZE = 4;

class Location {
public:
	void setRow(int newR) {
		row = newR;
	}
	void setCol(int newC) {
		column = newC;
	}
	void setMaxvalue(double max) {
		maxValue = max;
	}
	int getRow() {
		return row;
	}int getCol() {
		return column;
	}double getMaxvalue() {
		return maxValue;
	}
private:
	int row,column;
	double maxValue;
};
Location locateLargest(const double a[][COL_SIZE]) {
	Location largest;
	largest.setCol(0);
	largest.setRow(0);
	largest.setMaxvalue(a[0][0]);
	for(int i=0;i<ROW_SIZE;i++)
		for (int j = 0; j < COL_SIZE; j++)
			if (largest.getMaxvalue() < a[i][j]){
				largest.setMaxvalue(a[i][j]);
				largest.setCol(j);
				largest.setRow(i);
			}
	return largest;
}
int main() {
	cout << "Enter a 3-by-4 two-dimensional array: \n";
	double arr[ROW_SIZE][COL_SIZE];
	for (int i = 0; i < ROW_SIZE; i++)
		for (int j = 0; j < COL_SIZE; j++)
			cin >> arr[i][j];
	Location largest=locateLargest(arr);

	cout << "The location of the largest element is " << largest.getMaxvalue() << " at ("
		<< largest.getRow() << ", " << largest.getCol() << ")";


	system("pause");
	return 0;
}