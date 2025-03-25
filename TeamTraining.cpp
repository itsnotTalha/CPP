#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int res = 0;
        int need = 1;
        for (int i = n - 1; i >= 0; --i) {
            if (a[i] * need >= x) {
                res++;
                need = 1;
            } else {
                need++;
            }
        }
        cout << res << endl;
    }
    return 0;
}