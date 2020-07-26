#include<iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	int* a;
	a = new int[t];
	for (int i = 0; i < t; i++) {
		a[i] = i + 1;
	}

	for (int i = 0; i < t-1; i++) {
		for (int j = 0; j < t - i; j++) {
			a[j] = a[j + 1];
		}
		a[t - i - 1] = a[0];
		for (int j = 0; j < t - i; j++) {
			a[j] = a[j + 1];
		}

	}
	cout << a[0];

}