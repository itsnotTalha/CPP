#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, chk = "hznu";
    int occ = 0;
    cin >> s;

    if (s.size() < 4) {  
        cout << 0 << endl;
        return 0;
    }

    for (int i = 0; i <= (int)s.size() - 4; i++) {  
        if (s.substr(i, 4) == chk) {
            occ++;
            i += 3;  // Prevent overlapping
        }
    }

    cout << occ << endl;
    return 0;
}
