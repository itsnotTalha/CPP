#include <bits/stdc++.h>
using namespace std;

#define Fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb push_back
#define ppb pop_back
#define MP make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define sz(x) int(x.size())

#define for0(i, n) for (int i = 0; i < int(n); i++)
#define for1(i, n) for (int i = 1; i <= int(n); i++)
#define FOR(i, x, y) for (int i = int(x); i <= int(y); i++)
#define ROF(i, x, y) for (int i = int(x); i >= int(y); i--)

#define si(x) scanf("%d", &x)
#define sii(x, y) scanf("%d %d", &x, &y)
#define siii(x, y, z) scanf("%d %d %d", &x, &y, &z)
#define sl(x) scanf("%lld", &x)
#define sll(x, y) scanf("%lld %lld", &x, &y)
#define slll(x, y, z) scanf("%lld %lld %lld", &x, &y, &z)

#define ip(a, n) for0(i, n) cin >> a[i]

int main() {
    Fast_io;
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi a(n);
        ip(a, n);

        bool flag = false;
        for0(i, n - 1) {
            if (abs(a[i] - a[i + 1]) <= 1) {
                flag = true;
                break;
            }
        }

        if (flag) {
            cout << "0\n";
        } else if (n < 2) {
            cout << "-1\n";
        } else {
            int ans = -1;
            for (int start = 0; start < n; ++start) {
                int low = a[start];
                int high = a[start];

                for (int end = start + 1; end < n; ++end) {
                    low = min(low, a[end]);
                    high = max(high, a[end]);
                    int changes = end - start;

                    if (start > 0) {
                        int left = a[start - 1];
                        int leftMin = min(high, left + 1);
                        int leftMax = max(low, left - 1);
                        if (leftMax <= leftMin) {
                            if (ans == -1 || changes < ans)
                                ans = changes;
                        }
                    }

                    if (end < n - 1) {
                        int right = a[end + 1];
                        int rightMin = min(high, right + 1);
                        int rightMax = max(low, right - 1);
                        if (rightMax <= rightMin) {
                            if (ans == -1 || changes < ans)
                                ans = changes;
                        }
                    }
                }
            }

            cout << ans << "\n";
        }
    }
    return 0;
}
