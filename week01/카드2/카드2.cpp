#include<iostream>
#include<queue>
using namespace std;

int main() {
	int t;
	cin >> t;
	queue<int> q;
	for (int i = 0; i < t; i++) {
		q.push(i+1);
	}

	while (true) {
		if (q.size() == 1) {
			break;
		}
		q.pop();
		q.push(q.front());
		q.pop();
	}
	
	cout << q.front();

}