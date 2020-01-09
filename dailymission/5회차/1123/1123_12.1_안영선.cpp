#include <iostream>
#include <string>
using namespace std;

template<typename T>
T max(T list[], int size)
{
	T max = list[0];
	for (int i = 1; i < size; i++)
	{
		if (max < list[i])
			max = list[i];
	}
	return max;
}


int main()
{
	int list[] = { 5,2,8,6,12,43,21,9 };
	double dlist[] = { 5.1,2.1,1.5,3.8,45.2,3.9,12.6,0.7 };
	string slist[] = { "Atlanta","Denver","Chicago","Dallas" };

	cout << "Á¤¼ö ÃÖ´ñ°ª: " << max(list, 8)<<endl;
	cout << "½Ç¼ö ÃÖ´ñ°ª: " << max(dlist, 8)<<endl;
	cout << "¹®ÀÚ¿­ ÃÖ´ñ°ª: " << max(slist, 4)<<endl;

	

	system("pause");
	return 0;
}