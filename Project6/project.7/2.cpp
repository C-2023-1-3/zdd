#include <iostream>
using namespace std;
#define a 3.14
int main()
{
	double r = 0, h = 0;
	cout << "请输入r" << endl;
	cin >> r; 
	cout << "请输入h" << endl;
	cin >> h;
	double v = 0;
	v = (a * r * r * h) / 3;
	cout << "圆锥的体积为" << v << endl;
	return 0;
}