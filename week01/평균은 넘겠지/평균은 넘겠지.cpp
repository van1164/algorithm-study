#include<iostream>
using namespace std;

int main() {
	int t, k;
	int arr[1200];
	for (int i = 0; i < 1200; i++) {
		arr[i] = -1;
	}
	float per;
	cin >> t;
	for (int i = 0; i < t; i++) {
		float y = 0.0;
		float p;
		int result = 0;
		cin >> p;
		for (int j = 0; j < p; j++) {
			cin >> k;
			arr[j] = k;
			result = result + k;
		}
		result = result / p;
		for (int x = 0; arr[x] != -1; x++) {
			if (arr[x] > result) {
				y++;
			}
		}
		per = (y / p) * 100;
		cout << fixed;
		cout.precision(3);
		cout << per << '%' << '\n';
	}
}