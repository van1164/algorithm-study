#include<iostream>
#include<string>
using namespace std;

int main() {
	int t, p;
	string x;
	char a[25];
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> p;
		cin >> a;
		for (int j = 0; a[j] != NULL; j++) {
			for (int k = 0; k < p; k++) {
				cout << a[j];
			}
		}
		cout << '\n';
	}

	return 0;
}