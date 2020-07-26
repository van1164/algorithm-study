#include<iostream>

using namespace std;

int main() {
	int a[9], max=0,idx=0,t;
	for (int i = 0; i < 9; i++) {
		cin >> t;
		a[i] = t;
	}
	for (int j = 0; j < 9; j++) {
		if (a[j] > max) {
			max = a[j];
			idx = j;
		}
	}
	cout << max << '\n';
	cout << idx;
}