#include<iostream>
#include<time.h>
using namespace std;

int main() {
	srand(time(NULL));
	int a[10];
	int temp;
	for (int i = 0; i < 10; i++) {
		a[i] = i+1;
	}


	for (int i = 0; i < 10; i++) {
		cout << a[i] << "\t";
	}
	cout << endl;

	for (int i = 0; i < 10; i++) {
		int max = i;
		int min = i;
		for (int j = i; j < 10 - i; j++) {
			if (a[j] > a[min]) {
				min = j;
			}
			if (a[j] < a[max]) {
				max = j;
			}

		}
		temp = a[9 - i];
		a[9 - i] = a[max];
		a[max] = temp;
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;


	}




	cout << endl;
	for (int i = 0; i < 10; i++) {
		cout << a[i] << "\t";
	}


}