#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a;
    int x;
    while (cin >> x) a.push_back(x);
    if (a.empty()) return 0;

    int pos = 0, t = 1;
    if (a[0] == (int)a.size() - 1) {
        t = a[0];
        pos = 1;
    } else {
        t = a.size();
        pos = 0;
    }

    for (int tc = 0; tc < t; ++tc) {
        int n = a[pos + tc];
        deque<int> deck;
        for (int i = n; i >= 1; --i) {
            deck.push_front(i);
            for (int j = 0; j < i; ++j) {
                deck.push_front(deck.back());
                deck.pop_back();
            }
        }
        for (int i = 0; i < n; ++i) {
            cout << deck[i] << (i + 1 == n ? "" : " ");
        }
        if (tc + 1 < t) cout << '\n';
    }
    return 0;
}
