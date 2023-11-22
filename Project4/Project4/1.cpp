#include <iostream>
using namespace std;
int main()
{
	int num1=0 , num2=0 , num3=0 ;
	cout << "这三个数为" << endl;
	cin >> num1 >> num2 >> num3 ;
	if (num1 > num2)
	{
		if (num1 > num3)
		{
			cout << "a"<< endl;
		}
		else
		{
			cout <<"c"<< endl;
		}
	}
	else
	{
		if (num2 > num3)
		{
			cout << "b" << endl;
		}
		else
		{
			cout << "c" << endl;
		}
	}
		return 0;
}