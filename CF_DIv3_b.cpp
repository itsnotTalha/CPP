#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, k;
        cin >> x >> k;
        if (k == 1) {
            cout<<(isPrime(x)?"YES":"NO")<<endl;
        } else {
            cout<<((x == 1 && k == 2)?"YES":"NO")<<endl;
        }
    }
    return 0;
}