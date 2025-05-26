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

struct St {
    int u, p, d;
    ll pref, mn, mx;
};

int main() {
    Fast_io;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n + 1);
        for1(i, n) {
            cin >> a[i];
        }

        vector<vi> h(n + 1);
        int u, v;
        for (int i = 1; i < n; i++) {
            cin >> u >> v;
            h[u].pb(v);
            h[v].pb(u);
        }

        vector<ll> thrt(n + 1);
        vector<St> st;
        st.pb({1, 0, 0, a[1], 0, 0});

        while (!st.empty()) {
            St crnt = st.back();
            st.pop_back();
            if (crnt.d % 2 == 0) {
                thrt[crnt.u] = crnt.pref - crnt.mn;
            } else {
                thrt[crnt.u] = crnt.mx - crnt.pref;
            }

            ll nmin = min(crnt.pref, crnt.mn);
            ll nmax = max(crnt.pref, crnt.mx);

            for (int x : h[crnt.u]) {
                if (x != crnt.p) {
                    int nDepth = crnt.d + 1;
                    ll cPref = crnt.pref + ((nDepth % 2 == 0) ? a[x] : -a[x]);
                    st.pb({x, crnt.u, nDepth, cPref, nmin, nmax});
                }
            }
        }

        for1(i, n) {
            cout << thrt[i] << (i != n ? ' ' : '\n');
        }
    }
    return 0;
}
