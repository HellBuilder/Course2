#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n; 
    cin >> n;
    int count = 0, num = 1;
    while (count < n) {
        num++;
        bool prime = true;
        if (num < 2) prime = false;
        else {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    prime = false;
                    break;
                }
            }
        }
        if (prime) count++;
    }
    cout << num;
}
