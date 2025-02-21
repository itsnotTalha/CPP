#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    int total = n * m;
    
    vector<int> even, odd;
    
    // Separate even and odd numbers
    for (int i = 1; i <= total; i++) {
        if (i % 2 == 0) even.push_back(i);
        else odd.push_back(i);
    }
    
    // Merge them with evens first
    vector<int> result;
    result.insert(result.end(), even.begin(), even.end());
    result.insert(result.end(), odd.begin(), odd.end());

    // Print as an n × m matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << result[i * m + j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
