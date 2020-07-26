#include<iostream>
#include<string>
using namespace std;

int main() {
	int t,a, size =0;
	string s;
	string pp;
	cin >> t;
	int list[10000];

	for (int i = 0; i <= t; i++) {
		getline(cin, s);
		if (s.substr(0, 4) == "push") {
			pp = s.substr(5,s.length()-1);
			a= stoi(pp);
			list[size] = a;
			size++;
		}
		else if (s == "pop") {
			if (size == 0) {
				cout << -1 << '\n';
			}
			else {
				size--;
				cout << list[size] << '\n';
			}
		}
		else if (s == "size") {
			cout << size<<endl;
		}
		else if (s=="empty") {
			if (size == 0) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}

		}
		else if (s == "top") {
			if (size == 0) {
				cout << -1 << '\n';
			}
			else {
				cout << list[size - 1] << '\n';
			}
		}



	}


}