#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	cout << a - b << endl;
	cout << a + b << endl;
	cout << a * b << endl;
	if(b==0)
	{
		cout << "ÔËËã·Ç·¨" << endl;
	}
	else
	{
		cout << a / b << endl;
		cout << a % b << endl;
	}
}