#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    stack<char> st1;
    for (char c : s1) {
        if (c == '#') {
            if (!st1.empty()) st1.pop();
        } else {
            st1.push(c);
        }
    }
    string res1;
    while (!st1.empty()) {
        res1 = st1.top() + res1;
        st1.pop();
    }

    stack<char> st2;
    for (char c : s2) {
        if (c == '#') {
            if (!st2.empty()) st2.pop();
        } else {
            st2.push(c);
        }
    }
    string res2;
    while (!st2.empty()) {
        res2 = st2.top() + res2;
        st2.pop();
    }

    if (res1 == res2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
