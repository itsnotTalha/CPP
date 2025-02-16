#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, c1 = 0, c2 = 0;
        cin >> n;
        vector<int> a(n);
        int sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 1)
                c1++;
            else
                c2++;
            sum += a[i];
        }

        if (sum % 2 != 0) {
            cout << "NO" << endl;
        } else {
            if (c1 > 0 || (c2 % 2 == 0)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
