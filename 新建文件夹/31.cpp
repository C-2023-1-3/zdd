#include <iostream>
using namespace std;

void main()
{
int i, j, * pi, * pj;     //�˴���*��ʾ����ָ����������Ǽ�������
pi = &i;
pj = &j;
i = 5; j = 7;
cout << i << "  " << j << "  " << pi << "   " << pj << endl;
cout << &i <<  "  " << *&i << "   " << &j << "   " << *&j;
    }

