#include <iostream>
using namespace std;

int main()
{
	cout << "   	 Su M T W Th F Sa\n";
	int employee[8][7];
	for (int i = 0; i < 8; i++)
	{
		cout << "Employee" << i << " ";
		for (int j = 0; j < 7; j++)
			cin>>employee[i][j];
	}

	int sum[8][2];
	//합계배열 초기화
	
	for (int j = 0; j < 8; j++)
	{
		sum[j][0] = j;//0번째 열:index
		sum[j][1] = 0;//1번째 열:sum
	}
	

	//근무시간합계
	
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 7; j++)
				sum[i][1] += employee[i][j];
	}
	
	
	//내림차순 정렬
	cout << "Sum: \n";
	
	
	
	for (int i = 0; i < 8; i++)
	{
		int minRowNum = sum[i][0];//직원Indexnumber
		int minColumnIndex = i;
		int minSum = sum[i][1];
		for (int j = 1; j < 8; j++)
		{
			if (minSum > sum[j][1])
			{
				minSum = sum[j][1];
				minColumnIndex = j;
				minRowNum = sum[j][0];
			}

			if (minSum != sum[i][1])
			{
				sum[minColumnIndex][1] = sum[i][1];
				sum[minColumnIndex][0] = sum[i][0];
				sum[i][1] = minSum;
				sum[i][0] = minRowNum;
			}
		}
	}
	cout << "\n\nSum: ";
	for (int i = 0; i < 8; i++)
	{
		cout << "Employee" << sum[i][0] << ": " << sum[i][1]<<endl;
	}


	system("pause");
	return 0;
}