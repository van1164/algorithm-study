#include<iostream>

using namespace std;

#include<iostream>
using namespace std;

int main() {
	int a,b1,b2,i,temp;
	cin >> a;
	b1 = a / 10;
	b2 = a % 10;
	i = 1;
	while (true)
	{	
		temp = b1 + b2;
		b1 = b2;
		b2 = temp%10;
		if (a == b1 * 10 + b2) {
			break;
		}

		i++;
	}
	cout << i;
}