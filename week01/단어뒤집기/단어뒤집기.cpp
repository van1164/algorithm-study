#include<iostream>
#include<string>
using namespace std;

int main() {
	int t, temp =0, idx, tt;
	string s, tp;
	cin >> t;
	getline(cin, s);
	for (int i = 0; i <= t; i++) {
		idx = s.find(" ", temp);
		cout << idx << endl;
		/*tp = s.substr(temp, idx);
		for (int j = 0; j < tp.length(); j++) {
			tt = tp[j];
			tp[j] = tp[tp.length() - 1 - j];
			tp[tp.length() - 1 - j] = tt;
		}
		for (int t = temp+1; temp+1 <temp +1+ tp.length(); t++) {
			s[t] = tp[t];
		}
	}
	cout << s << '\n';*/

	}


}