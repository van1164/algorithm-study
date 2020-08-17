#include<iostream>
#include<string>
using namespace std;

int main() {
	int t;
	cin >> t;
	string a[2000];
	string b;
	for (int i = 0; i < t; i++) {
		cin >> b;
		a[i] = b;
	}
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < t - i; j++) {
			if (a[j].length() > a[j + 1].length()) {
				string temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
			else if (a[j].length() == a[j + 1].length()) {
				if (a[j] > a[j + 1]) {
					string temp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp;
				}
			}
		}
	}
	int p = t;
	for (int i = 0; i < p; i++) {
		if (a[i] == a[i + 1]) {
			for (int j = i; j < p; j++) {
				a[j] = a[j + 1];
			}
			p--;
		}
	}

	for (int i = 0; i < p + 1; i++) {
		cout << a[i] << '\n';
	}

}