#include <iostream>
using namespace std;
bool is_prime(int num);
int main()
{
	int x = 0;
	cout << "ÇëÊäÈë" << endl;
	cin >> x;
	int a = is_prime(x);
	cout << bool(a);
}
bool is_prime(int num)
{
	if (num == 2)
	{
		num = 1;
	}

	else
	{
		for (int x = 2; x < num; x++)
		{
			int c = num % x;
			if (c != 0)
			{
				num = 1;
			}
			else
			{
				num = 0;
			}

		}
	}
	return num;
}
