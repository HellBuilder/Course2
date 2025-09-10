#include <stack>
#include <iostream>
#include <list>

using namespace std;

int main() {
    int a, b = 0, temp, d = 1;
    cin >> a;

    list<int> e(a);

    while(b < a) {
        cin >> temp;
        e[b] = temp;
        b++;
    }

    

}