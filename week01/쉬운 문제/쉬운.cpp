#include<iostream>

using namespace std;

char a[101];

int main() {
    while (cin>>a)
    {
        a = {};
        int num[4] = { 0 };
        for (int i = 0; a[i] != NULL; i++) {
            if (a[i] == ' ') {
                num[3]++;
            }
            else if (a[i] <= '9') {
                num[2]++;
            }
            else if (a[i] <= 'Z') {
                num[1]++;
            }
            else {
                num[0]++;
            }
        }
        for (int k = 0; k < 4; k++) {
            cout << num[k] << " ";
        }
    }

}