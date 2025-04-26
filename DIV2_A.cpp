#include<bits/stdc++.h>

using namespace std;

void solve() {
     string s;
    cin >> s;
    map<int, int> freq;
    for (char c : s) {
        int d = c - '0';
        freq[d]++;
       }
    string res;
     for (int i = 1; i <= 10; ++i) {
        int min_d = 10 - i;
        int minN = (i < 10) ? (10 - (i + 1)) : -1;
        int dsel = -1;
        for (int d = min_d; d <= 9; ++d) {
            if (freq[d] == 0) continue;
            if (i == 10) {
                dsel = d;
                break;
            }
            freq[d]--;
            bool found = false;
            for (int fd = minN; fd <= 9; ++fd) {
                if (freq[fd] > 0) {
                    found = true;
                    break;
                    }
                }
                freq[d]++;
                if (found) {
                    dsel = d;
                    break;
                }
            }
            if (dsel != -1) {
                res += to_string(dsel);
                freq[dsel]--;
            }
        }
        cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--)
    solve();
    return 0;
}