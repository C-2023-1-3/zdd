#include <iostream>
#include<iomanip>
using namespace std;
int main2()
{
	float num1, num2, num3;
	cout << "Please put in three numbers:";
	cout << setprecision(12)<<setw(60);
	cin >> num1 >> num2 >> num3;
	cout << "The average number" << num1 << "," << num2 << ","<<num3;
	cout << "is" << (num1 + num2 + num3) / 3 << endl;
	return 0;
}