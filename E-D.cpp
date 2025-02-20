#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    int q;
    cin >> s >> q;
    
    int n = s.size();
    vector<int> flip(n + 1, 0); 

    vector<char> ans; 

    for (int a = 0; a < q; a++) {
        char tmp;
        cin >> tmp;
        if (tmp == 'I') {
            int i, j;
            cin >> i >> j;
            i--; j--; 
            flip[i] ^= 1; 
            flip[j + 1] ^= 1;
        } else {
            int i;
            cin >> i;
            i--; 
            
            int flip_count = 0;
            for (int k = 0; k <= i; k++) {
                flip_count ^= flip[k]; 
            }
            
            if (flip_count % 2 == 1) {
                ans.push_back((s[i] == '0') ? '1' : '0');
            } else {
                ans.push_back(s[i]);
            }
        }
    }

    static int case_num = 1;
    cout << "Case " << case_num++ << ": " << endl;
    for (char x : ans) {
        cout << x << endl;
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}
