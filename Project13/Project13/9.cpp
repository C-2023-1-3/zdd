#include <iostream>
using namespace std;
int main()
{
	int x = 0, y = 0, z = 0;
	
	cout << "������x" << endl;
	cin >> x;
	cout << "������y" << endl;
	cin >> y; 
	cout << "������z" << endl;
	cin >> z;
	if(x+y>z&&y+z>y&&x+z>y)
	{
		int f = 0;
		f = x + y + z;
		cout << "�ܳ�Ϊ" << f << endl;
		if (x == y || x == z|| y==z) 
		{ cout << "��������Ϊ����������" << endl; }

	}
	else { cout << "����������" << endl; }
	return 0;


}