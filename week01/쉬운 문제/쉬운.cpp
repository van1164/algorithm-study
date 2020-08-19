#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int arr[3];
	arr[0] = 1;
	int t;
	cin >> t;
	int a, b;
	int temp;
	for (int i= 0; i < t; i++) {
		cin >> a >> b;
		temp = arr[a - 1];
		arr[a - 1] = arr[b - 1];
		arr[b - 1] = temp;
	}
	if (arr[0] == 1) {
		cout << 1;
	}
	else if (arr[1] == 1) {
		cout << 2;
	}
	else {
		cout << 3;
	}
}

