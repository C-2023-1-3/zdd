#include <iostream>
using namespace std;
int main()
{
	double a = 0, b = 0;
	cin >> a;
	cin >> b;
	cout << (a + b) << endl;
	cout << (a - b) << endl;
	cout << (a * b) << endl;
	if (b != 0) {
		cout << (a / b) << endl;
		cout << (int (a) % int (b)) << endl;
	}
}