#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int countPrime = 0, num = 1;
    int primes[100000];
    int primeCount = 0;
    while (countPrime < n) {
        num++;
        bool prime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                prime = false;
                break;
            }
        }
        if (prime) {
            primes[++primeCount] = num;
            if (primeCount > 1) {
                bool indexPrime = true;
                int idx = primeCount;
                for (int i = 2; i * i <= idx; i++) {
                    if (idx % i == 0) {
                        indexPrime = false;
                        break;
                    }
                }
                if (indexPrime) {
                    countPrime++;
                }
            }
        }
    }
    cout << primes[primeCount];
}
