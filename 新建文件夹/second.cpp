#include <iostream>
using namespace std;
class cube
{
public:
	void get(int a,int b,int c)
	{
		L = a;
		W = b;
		H = c;
	}
	int c_out()
	{
		int v;
		v = L * W * H;
		return v;
	}
private:
	int L;
	int W;
	int H;
};
int main()
{
	int a, b,c;
	cube p;
	for (int i = 0; i < 3; i++)
	{
		cout << "ÇëÊäÈë³¤£¬¿í£¬¸ß" << endl;
		cin >> a >> b >> c;
		p.get(a, b, c);
		cout << "V = " << p.c_out() << endl;

	}

}