#include <iostream>
using namespace std;
int main()
{
	double arr[10];
	for (int x = 0; x < 10; x++)
	{
		cout << "ÊäÈë" << endl;
		cin >> arr[x];
	}
	for (int a = 0; a < 9; a++)
	{
		for (int b = 0; b < 9 - a; b++)
		{
			if (arr[b] > arr[b + 1])
			{
				double t = arr[b];
				arr[b] = arr[b + 1];
				arr[b + 1] = t;
			}
		}
	}
	for (int m = 0; m < 10; m++)
	{
		cout << arr[m] ;
	}
}