#include <iostream>
#include <string>
using namespace std;

double hap(double* a, int size) {
	double result = 0;
	for (int i = 0; i < size; i++) {
		result += a[i];
	}
	return result;
}
double avg(double* a, int size) {
	double result = 0;
	return hap(a, size) / size;
}


int main() {
	int n = 0;
	cout << "�Է��� ���� �Է� : ";
	cin >> n;
	double* num = new double[n];

	cout << "���� �Է� : ";
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	cout << "�հ� : " << hap(num, n) << endl;
	cout << "��� : " << avg(num, n) << endl;
	return 0;
}