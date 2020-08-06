#include<iostream>

using namespace std;



int main() {
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		bool x = true;
		if (i == 1) {
			continue;
		}
		else if (i == 2) {
			cout<<2<<'\n';
			continue;
		}

		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				x = false;
				break;
				
			}
		}
		if (x == true) {
			cout << i << '\n';
		}
	}

}