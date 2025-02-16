#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        unordered_set<char> seen;
        char prev = s[0];
        bool isValid = true;

        for (int i = 0; i < n; i++) {
            if (s[i] != prev) {  // Change in character
                if (seen.count(s[i])) {  // If seen before, not contiguous
                    isValid = false;
                    break;
                }
                prev = s[i];  // Update previous character
            }
            seen.insert(s[i]);  // Mark character as seen
        }

        cout << (isValid ? "YES" : "NO") << endl;
    }
    return 0;
}
