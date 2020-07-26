#include<iostream>

using namespace std;

int main() {
	int t,start=0,end=0, num = 0, play =1;
	bool go = true;
	bool up = false;
	cout << "숫자를 입력해주세요: ";
	cin >> t;
	int arr[100][100] = { 0 };
	int temp = t;
	while (true)
	{
		

		if (temp <= 0) {
			break;
		}

		else if (go == true && up == false) {
			num = num + 1;
			arr[start][end] = num;
			end++;
			play++;
			if (play > temp) {
				end--;
				go = false;
				temp--;
				start++;
				play = 1;
			}
		}
		else if (go == false && up == false) {
			num = num + 1;
			arr[start][end] = num;
			start++;
			play++;
			if (play > temp) {
				start--;
				up = true;
				end--;
				play = 1;
			}
		}
		else if (go == false && up == true) {
			num++;
			arr[start][end]=num;
			end--;
			play++;
			if (play > temp) {
				go = true;
				end++;
				start--;
				temp--;
				play = 1;
			}

		}
		else if (go == true && up == true) {
			num++;
			arr[start][end] = num;
			start--;
			play++;
			if (play > temp) {
				up = false;
				start++;
				play = 1;
				end++;
			}

		}
	}

	for (int i = 0; i < t; i++) {
		for (int j = 0; j < t; j++) {
			cout << arr[i][j] << '\t';
		}
		cout << '\n';
	}




}