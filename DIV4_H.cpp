#include <bits/stdc++.h>
using namespace std;

int f(int k, const vector<int>& a, int l, int r) {
    int ans = 0;
    int current_k = k;
    for (int i = l; i <= r; ++i) {
        while (current_k % a[i] == 0 && current_k != 0) {
            current_k /= a[i];
        }
        ans += current_k;
    }
    return ans;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n, q; cin >> n >> q;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        while (q--) {
            int k, l, r;
            cin >> k >> l >> r;
            l--; r--;
            if (l < 0 || r >= n || l > r) {
                cout << "0\n";
                continue;
            }
            cout << f(k, a, l, r) << "\n";
        }
    }
    return 0;
}