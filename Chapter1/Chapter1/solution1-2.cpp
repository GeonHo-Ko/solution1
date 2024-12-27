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
	cout << "입력할 개수 입력 : ";
	cin >> n;

	int* num = new int[n];
	cout << "숫자를 입력하세요 : ";
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	cout << "실행할 기능을 선택하세요 - 1.오름차순, 2.내림차순";
	cin >> b;
	if (b == 1) {
		topsort(num, n);
		cout << "오름차순 정렬: ";
		for (int i = 0; i < n; i++) {
			cout << num[i] << " ";
		}
		cout << endl;
	}
	else if (b == 2) {
		botsort(num, n);
		cout << "내림차순 정렬: ";
		for (int i = 0; i < n; i++) {
			cout << num[i] << " ";
		}
		cout << endl;
	}
	else {
		cout << "잘못된 숫자 입력";
		main();
	}
	

	delete[] num;

	return 0;
}