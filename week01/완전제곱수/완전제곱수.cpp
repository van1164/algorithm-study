#include<iostream>

using namespace std;

int main() {
	int a, b,min=10000000,result=0;
	cin >> a;
	cin >> b;
	for (int i = 1; i * i <= b; i++) {
		if (i * i >= a) {
			result = result + i * i;
			if (min > i * i) {
				min = i * i;
			}
		
		}
	}
	if (result == 0) {
		cout << -1;
	}
	else {
		cout << result << '\n' << min;
	}

}