#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> s(n);
        
        for (int i = 0; i < n; i++)
            cin >> s[i];

        sort(s.begin(), s.end());

        int minDiff = INT_MAX;
        for (int i = 1; i < n; i++) {
            minDiff = min(minDiff, s[i] - s[i - 1]);
        }

        cout << minDiff << endl;
    }
    
    return 0;
}
