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
	cout << "입력할 개수 입력 : ";
	cin >> n;
	double* num = new double[n];

	cout << "숫자 입력 : ";
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	cout << "합계 : " << hap(num, n) << endl;
	cout << "평균 : " << avg(num, n) << endl;
	return 0;
}