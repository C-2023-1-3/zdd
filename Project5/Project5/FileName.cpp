#include <iostream>
using namespace std;
extern void p1dispG(); 
extern void p2dispG();
extern void p3dispG();
int G = 0, g = 0;
int main()
{
	 p1dispG();
	 p2dispG();
     p3dispG();
	 cout << "in G=" << G << endl;
	 cout << "in g=" << g << endl;
	return 0;
}