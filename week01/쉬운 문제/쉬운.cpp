#include<iostream>
#include<algorithm>
using namespace std;


bool desc(int a, int b) { return a > b; }
int main(){

	char arr[30];
	cin >> arr;
	sort(arr, arr + 30, desc);
	for (int i = 0; arr[i] != NULL; i++) {
		cout << arr[i];
	}
}


