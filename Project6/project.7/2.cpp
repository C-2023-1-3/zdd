#include <iostream>
using namespace std;
#define a 3.14
int main()
{
	double r = 0, h = 0;
	cout << "������r" << endl;
	cin >> r; 
	cout << "������h" << endl;
	cin >> h;
	double v = 0;
	v = (a * r * r * h) / 3;
	cout << "Բ׶�����Ϊ" << v << endl;
	return 0;
}