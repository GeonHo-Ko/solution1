#include <iostream>
#include <string>
using namespace std;

void topsort(int* a, int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

void botsort(int* a, int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (a[j] < a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}


int main() {
	int n = 0;
	int b = 0;
	cout << "�Է��� ���� �Է� : ";
	cin >> n;

	int* num = new int[n];
	cout << "���ڸ� �Է��ϼ��� : ";
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	cout << "������ ����� �����ϼ��� - 1.��������, 2.��������";
	cin >> b;
	if (b == 1) {
		topsort(num, n);
		cout << "�������� ����: ";
		for (int i = 0; i < n; i++) {
			cout << num[i] << " ";
		}
		cout << endl;
	}
	else if (b == 2) {
		botsort(num, n);
		cout << "�������� ����: ";
		for (int i = 0; i < n; i++) {
			cout << num[i] << " ";
		}
		cout << endl;
	}
	else {
		cout << "�߸��� ���� �Է�";
		main();
	}
	

	delete[] num;

	return 0;
}