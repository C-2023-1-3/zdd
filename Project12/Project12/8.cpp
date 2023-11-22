#include <iostream>
using namespace std;
int main()
{
	char z = 'a';
	cout << "ÇëÊäÈë×Ö·û" << endl;
	cin >> z;
	int x = 0,y=0;
	x = int (z);
	y = x - 32;
	if (y < 91 && y>64) 
	{
		cout << char(y) << endl; 
	}
	else
	{
		cout << y << endl;
	}
	return 0;
}