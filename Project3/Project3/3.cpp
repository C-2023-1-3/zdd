#include <iostream>

using namespace std;
int main1()
{
	cout << 'A' <<'\t'<<';' << '\n';
	cout << '\102' << '\011' << '073' << '\012';
	cout << '\103' << '\11' << '\73' << '\12';
	cout << '\x44' << '\x09' << '\x3b' << '\x0a';
	cout << '\x45' << '\x9' << '\x3b' << '\xa';
	cout << "\x46\x09\x3b\x0d\x0a";
	cout << "\xcd\xcd\xcd\xcd\xcd";
	return 0;
}