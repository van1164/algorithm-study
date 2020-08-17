#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	long long int a, b, v;
	long long int result = 0, i = 0;
	cin >> a >> b >> v;
	while (result <= v)
	{
		if (result + 10000 * a < v) {
			i = i + 10000;
			result = result + 10000 * a - 10000 * b;
			continue;
		}
		if (result + 1000 * a < v) {
			i = i + 1000;
			result = result + 1000 * a - 1000 * b;
			continue;
		}

		if (result + 100 * a < v) {
			i = i + 100;
			result = result + 100 * a - 100 * b;
			continue;
		}
		if (result + 10 * a < v) {
			i = i + 10;
			result = result + 10 * a - 10 * b;
			continue;
		}
		result = result + a;
		if (result >= v) {
			i++;
			break;
		}
		result = result - b;
		i++;
	}
	cout << i;


}

