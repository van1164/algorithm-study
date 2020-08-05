#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int p = 0;
	for (int i = 1; i < 2 * t; i++) {
		if (i <= t) {
			p++;
		}
		else {
			p--;
		}
		for (int j = 0; j < t; j++) {
			if (j >= t - p) {
				cout << '*';
			}
			else {
				cout << ' ';
			}
		}

		cout << '\n';
	}
}