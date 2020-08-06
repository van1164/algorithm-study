#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int p;
		char a, b;
		cin >> p;
		int point_A = 0, point_B = 0;
		for (int j = 0; j < p; j++) {
			cin >> a >> b;
			if (a == 'R') {
				if (b == 'R') {

				}
				else if (b == 'P') {
					point_B++;
				}
				else {
					point_A++;
				}
			}
			else if (a == 'P') {
				if (b == 'R') {
					point_A++;
				}
				else if (b == 'P') {

				}
				else {
					point_B++;
				}
			}
			else if (a == 'S') {
				if (b == 'R') {
					point_B++;
				}
				else if (b == 'P') {
					point_A++;
				}
				else {

				}
			}


		}
		if (point_A == point_B) {
			cout << "TIE" << '\n';
		}
		else if (point_A > point_B) {
			cout << "Player 1" << '\n';
		}
		else {
			cout << "Player 2" << '\n';
		}
	}



}