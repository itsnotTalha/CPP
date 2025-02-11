#include<bits/stdc++.h>
using namespace std;
bool isComposite(int n) {
    if (n <= 1) return false;
    if (n <= 3) return false;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    for (int x = 4; x <= n / 2; x++) {
        if (isComposite(x)) {
            int y = n - x;
            if (isComposite(y)) {
                cout << x << " " << y;
                return 0; // Exit after finding the first valid pair
            }
        }
    }
}