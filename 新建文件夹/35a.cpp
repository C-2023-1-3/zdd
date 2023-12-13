#include <iostream>
#include <cstring>
using namespace std;
int prase(const char* const hexstring);
int main()
{
	const int size = 999;
	char s[size];
	cout << "NUMBER" << endl;
	cin.getline(s, size);
	cout << "ANSWER" << s << "=" << prase(s) << endl;
	return 0;
}
int prase(const char* const hexstring)
{
	int a, sum = 0;
	a = strlen(hexstring);
	int* list = new int[a];
	for (int i = 0; i < a; i++)
	{
		if (hexstring[i] >= 'A' && hexstring[i] <= 'F')
		{
			list[i] = (static_cast<int>(hexstring[i]) - 55) * (pow(16, a - 1 - i));
		}
		else
		{
			list[i] = (hexstring[i] - 48) * pow(16, a - 1 - i);
		}
		sum = sum + list[i];

	}
	return sum;
}