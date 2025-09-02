#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cout << "let me find that gcd!";
    cin >> a >> b;

    if(a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    while(a != 0 && b != 0) {
        a = b % a;
        temp = a;
        a = b;
        b = temp;

        cout << a << ' ' << b;
    }

    if(a == 0){
        cout << b;
    }
    else {
        cout << a;
    }
}