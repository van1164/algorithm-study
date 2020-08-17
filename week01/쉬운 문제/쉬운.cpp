#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int t;
	cin >> t;
	int* arr;
	arr = new int[t];
	int a;
	for (int i = 0; i < t; i++) {
		cin >> a;
		arr[i] = a;
	}
	int x = t;
	for (int i = t-1; i >=0; i--){
		for (int j = 0; j < i; j++) {
			if (arr[i] == -1) {
				break;
			}
			if (arr[j] == -1) {
				continue;
			}
			if (arr[i] >= arr[j]) {
				arr[j] = -1;
				x--;
			}
		}
	}
	cout << x;
}

