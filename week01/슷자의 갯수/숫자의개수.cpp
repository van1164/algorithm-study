#include<iostream>

using namespace std;

int main() {
	int number;
	int num[1000];
	int result[10] = {0};
	int i = 0;
	int a, b, c;
	cin >> a >> b >> c;
	number = a*b*c;
	while (number != 0)
	{
		num[i]=number % 10;
		number = number / 10;
		i++;
	}

	for (int j = 0; j<i; j++) {
		result[num[j]]++;
	}

	
	for (int j = 0; j<10; j++) {
		cout << result[j] << '\n';
	}

}