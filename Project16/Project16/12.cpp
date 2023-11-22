#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "ÊäÈëa,b" << endl;
	cin >> a;
	cin >> b;
	int c, d, e, f;
	d = a < b ? a : b;
	c = a > b ? a : b;
	e = c%d;
	f = a * b;
	if (e == 0) {
		e = d;
	}
	else {
		e = 1;
	}
	cout << e << endl;
	cout << f/c<< endl;
	return 0;
}