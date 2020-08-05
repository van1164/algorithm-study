#include<iostream>
#include<string>
using namespace std;

int main() {
	string a;
	int idx = 0, i = 0;
	getline(cin, a);
	if (a == " " || a == "") {
		cout << 0;
		return 0;
	}
	while (true)
	{
		if (a.find(" ", idx + 1) == string::npos) {
			break;
		}
		else if (a.find(" ", idx + 1) + 1 == a.length()) {
			break;
		}
		idx = a.find(" ", idx + 1);
		i++;
	}
	cout << i + 1;
	return 0;
}