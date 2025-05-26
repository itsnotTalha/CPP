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

struct St{
    int u, p, d;
    ll pref, mn, mx;
};

vector<ll> a;
vector<vi> adj;
vector<ll> threat;

void dfs(int u, int p, ll sum, ll min_sum, ll max_sum, int depth) {
    ll current_sum = sum + ((depth % 2 == 0) ? a[u] : -a[u]);
    threat[u] = max({threat[u], current_sum - min_sum, max_sum - current_sum});
    min_sum = min(min_sum, current_sum);
    max_sum = max(max_sum, current_sum);
    for (int v : adj[u]) {
        if (v != p) {
            dfs(v, u, current_sum, min_sum, max_sum, depth + 1);
        }
    }
}

int main() {
    Fast_io;
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        a.resize(n + 1);
        adj.assign(n + 1, vi());
        threat.assign(n + 1, LLONG_MIN);
        for1(i, n) {
            cin >> a[i];
        }
        for0(i, n - 1) {
            int u, v; cin >> u >> v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        dfs(1, 0, 0, 0, 0, 0);
        for1(i, n) {
            cout << threat[i] << (i != n ? ' ' : '\n');
        }
    }
    return 0;
}   