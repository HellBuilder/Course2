#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isBalanced(const string &s) {
    stack<char> st;
    for (char c : s) {
        if (!st.empty() && st.top() == c) {
            st.pop();
        } else {
            st.push(c);
        }
    }
    return st.empty();
}

int main() {
    string s;
    cin >> s;
    if (isBalanced(s)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
