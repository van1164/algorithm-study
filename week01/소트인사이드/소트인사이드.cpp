#include<iostream>

using namespace std;

int main() {
	long long int num;
	cin >> num;
	int arr[100];
	int i = 0;
	for (int i = 0; i < 100; i++) {
		arr[i] = 0;
	}
	while (num!=0) {
		arr[i] = num % 10;
		i++;
		num = num / 10;
	}
	for (int i = 0; arr[i] != 0; i++) {
		for (int j = 1; arr[j] != 0; j++) {
			if (arr[j - 1] < arr[j]) {
				int temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; arr[i] != 0; i++) {
		cout << arr[i];
	}


}