#include <iostream>
using namespace std;
class point
{
public:
	void setpoint(int i, int j)
	{
		x = x + i;
		y = y + j;
	}
	int display()
	{
		int arr[2];
		arr[0] = x;
		arr[1] = y;
		for (int i = 0; i < 2; i++)
		{
			cout << arr[i] << endl;
		}
		return 0;
	}
	
private:
	int x = 60;
	int y = 80;
};
int main()
{
	point t;
	int x, y;
	cout << "ÇëÊäÈëX Y" << endl;
	cin >> x >> y;
	t.setpoint(x, y);
	cout << endl;
	cout << t.display();
}