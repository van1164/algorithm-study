#include<iostream>

using namespace std;

int main() {
	int a, b, c, t;
	cin >> a >> b >> c;
	cin >> t;
	c = c + t % 60;
	b = b + t / 60;
	if (c >= 60) {
		b = b + c / 60;
		c = c % 60;
	}

	if (b >= 60) {
		a = a + b / 60;
		b = b % 60;
	}
	if (a >= 24) {
		a = a % 24;
	}
	cout << a << " " << b << " " << c;

}