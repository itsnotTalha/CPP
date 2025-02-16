#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 == 0) {
        cout << n / 2 << endl;  // Maximum count of primes
        for (int i = 0; i < n / 2; i++)
            cout << 2 << " ";
    } else {
        cout << n / 2 << endl;  // Maximum count of primes (one 3 and the rest 2s)
        cout << 3 << " ";
        for (int i = 1; i < n / 2; i++)
            cout << 2 << " ";
    }

    cout << endl;
    return 0;
}
