#include<iostream>

using namespace std;

int main() {
	int a;
	int b = 1;
	cin >> a;

	for (int i = 0; i < a; i++) {
		if (i < b) {
			cout << '*';
		}
		else {
			cout << '\n';
			b++;
			i = -1;
		}
	}



}