#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	long long int a, b, v, result = 0,i=0;
	cin >> a >> b >> v;
	while (result<=v)
	{
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

