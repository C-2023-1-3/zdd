#include <iostream>
using namespace std;
int main()
{
	const int x =50;
	int a, b;
	double c;
	for (a = 2;a < x;)
		for(b=2;b<125;)
	{
	
		a = a * 2;
		b = a + b;
	}
	c = b * static_cast<double>(4) / 5 / 6;
	cout << c << endl;
	return 0;
}
