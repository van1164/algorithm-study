#include<iostream>

using namespace std;

bool Prime(int num) {
	if (num == 1) {
		return false;
	}
	else if (num == 2) {
		return true;
	}
	else if (num == 3) {
		return true;
	}
	else {
		for (int i = 2; i < num; i++) {
			if (num % i == 0) {
				return false;
			}
		}
		return true;
	}


}

int main() {
	int x;
	cin >> x;
	for (int i = 1; i <= x; i++) {
		if (Prime(i)) {
			if (x % i == 0) {
				cout << i << '\n';
				x = x / i;
				i = 1;
			}
		}
	}

}