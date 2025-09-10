#include <iostream>
#include <vector>
#include <stack> 
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    stack<long long> st;
    for (int i = 0; i < n; ++i) {
        while (!st.empty() && st.top() > a[i]) st.pop();
        if (st.empty()) cout << -1;
        else cout << st.top();
        if (i + 1 < n) cout << " ";
        st.push(a[i]);
    }
    cout << '\n';
    return 0;
}
