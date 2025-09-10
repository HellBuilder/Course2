#include <iostream>
#include <deque>
#include <string>
#include <cctype>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    deque<long long> d;
    string tok;
    if (!(cin >> tok)) return 0;
    bool stop = false;

    auto process = [&](string t) {
        if (t.empty()) return;
        char c = t[0];
        if (c == '+' || c == '-') {
            long long x;
            if (t.size() > 1) x = stoll(t.substr(1));
            else cin >> x;
            if (c == '+') d.push_back(x);
            else d.push_front(x);
        } else if (c == '*') {
            if (d.empty()) {
                cout << "error\n";
            } else if (d.size() == 1) {
                cout << d.front() * 2 << '\n';
                d.pop_front();
            } else {
                long long sum = d.front() + d.back();
                cout << sum << '\n';
                d.pop_front();
                d.pop_back();
            }
        } else if (c == '!') {
            stop = true;
        }
    };

    bool isNumber = true;
    for (char ch : tok) if (!isdigit(static_cast<unsigned char>(ch)) && ch != '-') { isNumber = false; break; }

    if (isNumber) {
        int q = stoi(tok);
        for (int i = 0; i < q && !stop; ++i) {
            string cmd;
            if (!(cin >> cmd)) break;
            process(cmd);
        }
    } else {
        process(tok);
        while (!stop && (cin >> tok)) process(tok);
    }

    return 0;
}
