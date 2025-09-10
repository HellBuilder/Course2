#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    queue<int> S, K;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'S') S.push(i);
        else K.push(i);
    }
    while (!S.empty() && !K.empty()) {
        int si = S.front(); S.pop();
        int ki = K.front(); K.pop();
        if (si < ki) S.push(si + n);
        else K.push(ki + n);
    }
    if (S.empty()) cout << "Katsuragi";
    else cout << "Sakayanagi";
}
