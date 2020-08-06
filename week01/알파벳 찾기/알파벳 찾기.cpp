#include<iostream>
#include<string>
using namespace std;

int main() {
	char a[100];
	int num[26];
	for (int i = 0; i < 26; i++) {
		num[i]=-1;
	}

	cin >> a;
	for (int i = 0; a[i] != NULL; i++) {
		if (num[int(a[i]) - 97] == -1) {
			num[int(a[i]) - 97] = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << num[i] << " ";
	}

	return 0;
}