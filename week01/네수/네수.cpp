#include <iostream>

using namespace std;


int main() {
	int a, b, c, d, i = 1, j = 1, t;
	cin >> a >> b >> c >> d;
	t = b + d;
	while (b != 0) {
		b = b / 10;
		i = i * 10;
	}
	while (d != 0) {
		d = d / 10;
		j = j * 10;
	}
	cout << a * i + c * j + t;
}