#include<iostream>
using namespace std;


int merge(int list1[], int size1, int list2[], int size2, int list3[]);
int main() {
	int size1;
	int size2;

	cout << "������������1��Ԫ�ظ���" << endl;
	cin >> size1;
	int* list1 = new int[size1];
	cout << "�������Ѿ���С�������кõ�Ԫ�أ�" << endl;
	for (int i = 0; i < size1; i++) {
		cin >> list1[i];
	}

	cout << "������������2��Ԫ�ظ���" << endl;
	cin >> size2;
	int* list2 = new int[size2];
	cout << "�������Ѿ���С�������кõ�Ԫ�أ�" << endl;
	for (int i = 0; i < size2; i++) {
		cin >> list2[i];
	}
	int* list3 = new int[size1 + size2];
	merge(list1, size1, list2, size2, list3);
	for (int i = 0; i < size1 + size2; i++) {
		cout << list3[i] << "  ";
	}
	return 0;
}

int merge(int list1[], int size1, int list2[], int size2, int list3[]) {
	for (int i = 0, j = 0, k = 0; k < size1 + size2; k++) {
		if (i < size1 && j >= size2) {
			list3[k] = list1[i];
			i++;
		}
		if (i >= size1 && j < size2) {
			list3[k] = list2[j];
			i++;
		}
		if (i < size1 && j < size2) {
			if (list1[i] < list2[j]) {
				list3[k] = list1[i];
				i++;
			}
			else {
				list3[k] = list2[j];
				j++;
			}
		}

	}
	return 0;
}