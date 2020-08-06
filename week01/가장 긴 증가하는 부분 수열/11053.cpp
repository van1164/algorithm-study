#include<iostream>

using namespace std;



int main() {
	int arr[1000];
	int t;
	int p;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> p;
		arr[i] = p;
	}
	for (int i = 0; i < t; i++) {
		for (int j = 1; j < t - i; j++) {
			if (arr[j - 1] > arr[j]) {
				int temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < t - 1; i++) {
		if (arr[i] == arr[i + 1]) {
			arr[i] = 0;
		}
	}
	int result = 0;
	for (int i = 0; i < t; i++) {
		if (arr[i] == 0) {
			continue;
		}
		result++;
	}
	cout << result;
}