#include<iostream>
#include<cmath>
using namespace std;


int main() {
    int t;
    cin >> t;
    long long int a, b,x;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        a = a % 10;
        b = b % 4;
        x = pow(a, b);
        cout << (x% 10) << '\n';
    }



}