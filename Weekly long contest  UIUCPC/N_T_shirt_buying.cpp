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
    ll n; cin >> n;
    vector<ll> p(n);
    vector<ll> a(n);
    vector<ll> b(n);
    ip(p, n);
    ip(a, n);
    ip(b, n);
    ll m; cin >> m;
    vector<ll> c(m);
    ip(c, m);
    vector<ll> ans(m, -1);

    unordered_map<ll, set<ll>> cp;
    unordered_map<ll, pair<ll, ll>> priceperCol;

    for0(i, n) {
        cp[a[i]].insert(p[i]);
        cp[b[i]].insert(p[i]);
        priceperCol[p[i]] =MP(a[i], b[i]);
    }

    unordered_set<ll> up;

    for0(i, m) {
        ll color = c[i];
        if (cp.find(color) == cp.end()) {
            continue; 
        }
        auto& prices = cp[color];
        while (!prices.empty()) {
            ll price = *prices.begin();
            if (up.find(price) == up.end()) {
                ans[i] = price;
                up.insert(price);
                auto colors = priceperCol[price];
                cp[colors.ff].erase(price);
                cp[colors.ss].erase(price);
                break;
            } else {
                prices.erase(prices.begin());
            }
        }
    }

    for0(i, m) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}