#include <iostream>
using namespace std;

const int SIZE = 2;
void getIntersectingPoint(const double points[][SIZE], double result[])
{
	double a = points[0][1] - points[2][1];
	double b = -(points[0][0] - points[2][0]);
	double c = points[1][1] - points[3][1];
	double d = -(points[1][0] - points[3][0]);
	double e = (a*points[0][0]) - (-b*points[0][1]);
	double f = (c*points[1][0]) - (-d*points[1][1]);

	result[0] = (e*d - (b * f)) / (a*d - (b * c));//x
	result[1] = (a*f - (e * c)) / (a*d - (b * c));//y
}
double getArea(const double points[][SIZE],const double pointi[],int index1,int index2)
{
	double d1, d2, d3, s;

	d1= sqrt(pow(points[index1][0] - points[index2][0], 2) + pow(points[index1][1] - points[index2][1], 2));
	d2 = sqrt(pow(points[index2][0] - pointi[0], 2) + pow(points[index2][1] - pointi[1], 2));
	d3 = sqrt(pow(pointi[0] - points[index1][0], 2) + pow(pointi[1] - points[index1][1], 2));

	s = (d1 + d2 + d3) / 2;
	return sqrt(s*(s - d1)*(s - d2)*(s - d3));
}
void sortedlist(const double p[][SIZE],const double result[] )
{
	double list[4];
	list[0]=getArea(p, result, 0, 1);
	list[1] = getArea(p, result, 1, 2);
	list[2] = getArea(p, result, 2, 3);
	list[3] = getArea(p, result, 3, 0);

	cout << "The areas are ";
	for (int i = 0; i < 3; i++){
		double min = list[i];
		int minIndex = i;
		for (int j = i + 1; j < 4; j++){
			if (min > list[j]) {
				min = list[j];
				minIndex = j;
			}
		}
		if (minIndex != i){
			list[minIndex] = list[i];
			list[i] = min;
		}
	}
	for(int i=0;i<4;i++)
		cout << static_cast<int>(list[i]*100)/100.0 << " ";
}
int main()
{
	double point[4][2];//x=0,y=1
	double result[2];
	cout << "Enter x1, y1, x2, y2, x3, y3, x4, y4: ";

	for (int i = 0; i < 4; i++)
		cin >> point[i][0] >> point[i][1];

	getIntersectingPoint(point, result);
	cout << result[0] << "," << result[1]<<endl<<endl;
	cout<<getArea(point, result, 0, 1)<<" "<<getArea(point, result, 1, 2)<<" "<<getArea(point, result, 2, 3)<<" "<<getArea(point, result, 3, 0)<<endl;
	sortedlist(point, result);
	
	system("pause");
	return 0;
}