#include <iostream>
using namespace std;
class student
{
public:
	void getscore(int arr[5])
	{
		for (int i = 0; i < 5; i++)
		{
			score[i] = arr[i];
		}
	}
	void getnomber(int brr[5])
	{
		for (int j = 0; j < 5; j++)
		{
			nomber[j] = brr[j];
		}
	}
	int c_out()
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (score[j] > score[j + 1])
				{
					int x = score[j];
					score[j] = score[j + 1];
					score[j + 1] = x;
					int y = nomber[j];
					nomber[j] = nomber[j + 1];
					nomber[j + 1] = y;
				}
			}
		}
		return nomber[4];
	}
private:
	int score[5];
	int nomber[5];
};
int main()
{
	student t;
	int arr1[5] = {1,2,3,4,5 };
	int arr2[5] = { 92,95,96,94,98 };
	
	t.getnomber(arr1);
	t.getscore(arr2);
	cout << "nomber is " << t.c_out();
}

