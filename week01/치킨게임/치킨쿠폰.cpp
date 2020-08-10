#include<iostream>

using namespace std;

int main() {
	long long int n, k;
	while (cin)
	{
		long int i = 0;
		cin >> n >> k;
		for (i; n != 0; i++)
		{
			n--;
			if (i % k == 0) {
				n++;
			}
		}

		cout << i - 1 << '\n';
	}


}