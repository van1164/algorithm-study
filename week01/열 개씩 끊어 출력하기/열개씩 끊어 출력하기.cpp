#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int i = 0;
	while (i < s.length()) {
		cout << s[i];
		i++;
		if (i % 10 == 0) {
			cout << endl;
		}
	}

}