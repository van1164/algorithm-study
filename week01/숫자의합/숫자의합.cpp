#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	string pp;
	int t, result=0;
	cin >> t;
	cin >> s;
	for (int i = 0; i < t; i++) {
		pp = s[i];
		int p = stoi(pp);
		result = result + p;
	}
	cout << result;

}