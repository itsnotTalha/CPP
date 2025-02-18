#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(2 * n);
        int even_count = 0, odd_count = 0;

        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }

        cout << (even_count == odd_count ? "YES" : "NO") << endl;
    }
    return 0;
}
