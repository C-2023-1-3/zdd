#include <iostream>
using namespace std;
void main()
{
	int i, j, * pi, * pj;
	pi = &i;
	pj = &j;
	i = 5;
	j = 7;
	cout << i << "  " << j << "  " << pi << "  " << pi;
	cout << &i << "   " << *&i << "   " << &j << "  " << *&j;

}