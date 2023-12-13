#include <iostream>
using namespace std;
int main()
{
	int arr[10];
	cout << "ÇëÊäÈë" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	for (int x = 0; x < 9; x++)
	{
		for (int y = 0; y < 9 - x; y++)
		{
			if (arr[y] > arr[y + 1])
			{
				int a = arr[y];
				arr[y] = arr[y + 1];
				arr[y + 1] = a;
			}
		}
	}
	for (int b=0;b<10;b++)
	{
		if (arr[b] != arr[b + 1])
		{
			cout<<"   " << arr[b];
		}
	}
}
 