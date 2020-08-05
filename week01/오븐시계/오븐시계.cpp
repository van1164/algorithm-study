#include<iostream>
using namespace std;

int main() {
	int a, b, t, x, y;
	cin >> a >> b;
	cin >> t;
	x = t / 60;
	y = t % 60;
	a = a + x;
	if (b + y > 60) {
		a++;
		b = (b + y) % 60;

	}
	else if (b + y == 60) {
		a++;
		b = 0;
	}
	else {
		b = b + y;
	}
	a = a % 24;
	cout << a << ' ' << b;
}