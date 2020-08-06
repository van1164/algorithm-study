#include<iostream>

using namespace std;

int main() {
	char a[110];
	char b[110];
	cin >> a;
	int end=0;
	for (end; end < a[end+1] != NULL; end++) {

	}
	int p = end;
	for (int i = 0; i <= end; i++) {
		b[i] = a[p];
		p--;
	}
	for (int i = 0; i <= end; i++) {
		if (a[i] != b[i]) {
			cout << 0;
			return 0;
		}
	}
	cout << 1;
	

}