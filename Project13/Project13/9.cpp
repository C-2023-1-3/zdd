#include <iostream>
using namespace std;
int main()
{
	int x = 0, y = 0, z = 0;
	
	cout << "请输入x" << endl;
	cin >> x;
	cout << "请输入y" << endl;
	cin >> y; 
	cout << "请输入z" << endl;
	cin >> z;
	if(x+y>z&&y+z>y&&x+z>y)
	{
		int f = 0;
		f = x + y + z;
		cout << "周长为" << f << endl;
		if (x == y || x == z|| y==z) 
		{ cout << "该三角形为等腰三角形" << endl; }

	}
	else { cout << "不是三角形" << endl; }
	return 0;


}