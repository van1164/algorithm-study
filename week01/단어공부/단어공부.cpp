#include<iostream>
using namespace std;

int main() {
	char a[1000000];
	int num[26];
	int max = 0,p=0;
	for (int i = 0; i < 26; i++) {
		num[i] = 0;
	}

	cin >> a;
	for (int i = 0; a[i] != NULL; i++) {
		if (int(a[i]) <= 90) {
			num[int(a[i]) - 65]++;
		}
		else {
			num[int(a[i]) - 97]++;
		}
	}

	for (int i = 0; i < 26; i++) {
		
	if (num[i] > num[max]) {
			max = i;
		}
	}
	for (int i = 0; i < 26; i++) {

		if (num[i] == num[max]) {
			p++;
		}
	}


	if (p > 1) {
		cout << "?";
		return 0;
	}
	else {
		cout << char(max + 65);
		return 0;
	}
}