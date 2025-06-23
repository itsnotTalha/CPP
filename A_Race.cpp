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
    int t; cin >> t;
    while (t--) {
        int a, x, y;
        cin >> a >> x >> y;
        
        int mval = max(x, y);
        bool flag = false;

        for (int b = 1; b <= mval; b++) {
            if (b == a) continue;

            int ax = abs(a - x);
            int ay = abs(a - y);
            int bx = abs(b - x);
            int by = abs(b - y);

            if (bx < ax and by < ay) {
                flag = true;
                break;
            }
        }

        cout<<(flag ? "YES" : "NO")<<endl;
    }
    return 0;
}