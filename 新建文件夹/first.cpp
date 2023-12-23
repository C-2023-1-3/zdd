#include<iostream>
using namespace std;

class Time           
{
public:
	void c_in(int a, int b, int c)
	{
		hour = a;
		minute = b;
		sec = c;
	}
	int gethour()
	{
		return hour;
	}
	int getsec()
	{
		return sec;
	}
	int getminute()
	{
		return minute;
	}
private:             
	int hour;
	int minute;
	int sec;
};

int main()
{
	int x, y, z;
	cin >> x;
	cin >> y;
	cin >> z;
	Time t;
	t.c_in(x, y, z);
	cout << "hour" << t.gethour();
	cout << "minute" << t.getminute();
	cout << "sec" << t.getsec();
	return 0;
}