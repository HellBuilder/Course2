#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> boris, nursik;
    for (int i = 0; i < 5; i++) {
        int x; cin >> x;
        boris.push(x);
    }
    for (int i = 0; i < 5; i++) {
        int x; cin >> x;
        nursik.push(x);
    }

    int rounds = 0;
    while (!boris.empty() && !nursik.empty() && rounds < 1000000) {
        int b = boris.front(); boris.pop();
        int n = nursik.front(); nursik.pop();
        if ((b > n && !(b == 9 && n == 0)) || (b == 0 && n == 9)) {
            boris.push(b);
            boris.push(n);
        } else {
            nursik.push(b);
            nursik.push(n);
        }
        rounds++;
    }

    if (boris.empty()) cout << "Nursik " << rounds << endl;
    else if (nursik.empty()) cout << "Boris " << rounds << endl;
    else cout << "blin nichya" << endl;

    return 0;
}
