#include <iostream>
using namespace std;
int main()
{
	for (int y = 2; y < 200; y++)
	{
		if (y == 2)
		{
			cout << y;
		}
		else
		{
			for (int x = 2; x < y; x++)
			{
				int c = y % x;
				if (c != 0)
				{
					cout << y << endl;
				}
				
			}
		}
	}
}