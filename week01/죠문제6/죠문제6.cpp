#include <iostream>

using namespace std;


int Fibo(int num)
{
    int result=1;
    if (num == 1) {
        return 1;
    }
    else if (num == 2) {
        return 1;
    }
    int a1 = 1;
    int a2 = 1;
    for (int i = 0; i < num-2; i++) {
        int temp = result;
        result = a1 + result;
        a1 = temp;
    }
    return result;

}

int main() {

    int a;
    cout << "숫자를 입력하세용: ";
    cin >> a;


    for (int i = 1; i <= a; i++) {
        cout << Fibo(i) << "\t";
    }
    return 0;
}