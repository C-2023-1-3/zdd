#include <iostream>
using namespace std;
int monkey(int n);
int main()
{
	int a = 1;
	cout << monkey(a);
}

int monkey(int n)
{
	for (int i = 1; i < 10; i++)
	{
		n = (n + 1) * 2;
	}
	return n;
}
