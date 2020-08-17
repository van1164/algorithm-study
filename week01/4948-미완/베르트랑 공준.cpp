#include<iostream>

using namespace std;

int main() {
	while (1) {
		int t, result = 0;
		cin >> t;
		if (t == 0) {
			return 0;
		}
		for (int i = t + 1; i <= 2 * t; i++) {
			bool prime = true;
			if (i == 2) {
				result++;
			}
			else if (i == 3) {
				result++;
			}
			else if (i == 1) {

			}
			else {
				for (int j = 2; j < i; j++) {
					if (i % j == 0) {
						prime = false;
					}
				}
				if (prime == true) {
					result++;
				}
			}
		}
		cout << result << '\n';

	}
}