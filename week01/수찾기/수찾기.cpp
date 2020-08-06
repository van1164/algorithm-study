#include<iostream>

using namespace std;

int main() {
	int t;
	int p;
	int arr[100000];
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> p;
		arr[i] = p;
	}
	int x;
	cin >> x;
	for (int i = 0; i < x; i++) {
		bool boo = true;
		cin >> p;
		for (int j = 0; j < t; j++) {
			if (arr[j] == p) {
				cout << 1 << '\n';
				boo = false;
				break;
			}
		}
		if (boo == true) {
			cout << 0 << '\n';
		}

	}

}