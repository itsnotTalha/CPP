#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int odd_count = 0, even_count = 0, sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];  // Track the total sum
        if (a[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }

    // Case 1: If the sum is already odd, return "YES"
    if (sum % 2 != 0) {
        cout << "YES" << endl;
        return;
    }

    // Case 2: If all numbers are even, we can never get an odd sum
    if (odd_count == 0) {
        cout << "NO" << endl;
        return;
    }

    // Case 3: If there is at least one odd and one even, we can always adjust the sum to be odd
    if (even_count > 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;  // This case happens if all numbers are odd and `n` is even
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
