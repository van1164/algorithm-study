#include<iostream>

using namespace std;

int main() {
	int a, b, b1, b2, b3;
	cin >> a >> b;
	b1 = b / 100;
	b2 = (b % 100) / 10;
	b3 = b % 10;
	cout << a * b3 << '\n' << a * b2 << '\n' << a * b1 << '\n' << a * b;;

}