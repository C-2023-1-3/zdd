#include <iostream>
using namespace std;
extern int G;
extern int g;
void p2dispG()
{
	G = 22;
	cout << G << endl;
}
void p3dispG()
{
	g = 33;
		cout << g << endl;
}
