#include<iostream>
#include<time.h>
using namespace std;

int main() {
	int a[5];
	for (int i = 0; i < 5; i++) {
		a[i] = i + 1;
	}
	for (int i = 0; i < 5; i++) {
		cout << a[i] << '\t';
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
		int max = 0;
		for (int j = 0; j < 5 - i; j++) {
			if (a[max] < a[j]) {
				max = j;
			}
			
		}
		cout << a[max] << " " << i << " ";
		int temp = a[4 - i];
		a[4 - i] = a[max];
		a[max] = temp;
		cout << a[max] << " " << i << " ";
		for (int i = 0; i < 5; i++) {
			cout << a[i] << '\t';
		}
		cout << endl;
	}
	for (int i = 0; i < 5; i++) {
		cout << a[i] << '\t';
	}
}