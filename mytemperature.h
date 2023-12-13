#include <iostream>
using namespace std;
double celsius_to_fah(double a);
double fah_to_celsius(double x);
int main()
{
	cout << " C-F choose 1 or F-C choose 0" << endl;
	int num;
	cin >> num;
	if (num == 1)
	{
		cout << "celsius" << endl;
		double m = 0.0;
		cin >> m;
		cout << "fah   " << celsius_to_fah(m) << endl;
	}
	else
	{
		cout << "fah" << endl;
		double n = 0.0;
		cin >> n;
		cout << "celsius" << fah_to_celsius(n) << endl;
	}
}
