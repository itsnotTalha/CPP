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
        
        if (n != 5) {
            cout << "NO" << endl;
            continue;
        }

        string timur = "Timur";
        
        // Convert input string to the correct case
        for (char &c : s) {
            if (c == 't' || c == 'i' || c == 'm' || c == 'u' || c == 'r') {
                c = tolower(c);
            } else if (c == 'T') {
                c = 'T';
            } else {
                cout << "NO" << endl;
                goto next_case;
            }
        }

        sort(s.begin(), s.end());
        sort(timur.begin(), timur.end());

        cout << (s == timur ? "YES" : "NO") << endl;
        
        next_case:;
    }
    return 0;
}
