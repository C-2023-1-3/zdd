#include <iostream>
using namespace std;
int main()
{
	bool arr[100] = { false };
	for (int i = 0; i < 100; i++)
	{
		if (i == 0)
		{
			for (int j = 0; j < 100; j++)
			{
				arr[j] = true;
			}
		}
		else if (i == 1)
		{
			for (int j = i; j < 100; j = j + 2)
			{
				arr[j] = false;
			}
		}
		else
		{
			for (int j = i; j < 100; j = j + i)
			{
				arr[j] =! arr[j];
			}
		}
	}
	for (int j = 0; j < 100; j++)
	{
		if (arr[j] != 0)
		{
			cout << j+1 << "   ";
		}
	}
}