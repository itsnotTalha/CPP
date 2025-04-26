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

struct DSU {
    vector<int> parent;
    vector<int> size;

    DSU(int n) {
        parent.resize(n);
        size.resize(n, 1);
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
        }
    }

    int find(int u) {
        if (parent[u] != u) {
            parent[u] = find(parent[u]);
        }
        return parent[u];
    }

    void unite(int u, int v) {
        u = find(u);
        v = find(v);
        if (u != v) {
            if (size[u] < size[v]) {
                swap(u, v);
            }
            parent[v] = u;
            size[u] += size[v];
        }
    }
};

void solve() {
    int n;
    string s;
    cin >> n >> s;

    if (n == 0) {
        cout << 0 << '\n';
        return;
    }

    vector<string> grid(n);
    for (int i = 0; i < n; ++i) {
        string a = s;
        a[i] = (a[i] == '0') ? '1' : '0';
        grid[i] = a;
    }

    DSU dsu(n * n);
    vector<vector<bool>> is_zero(n, vector<bool>(n, false));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == '0') {
                is_zero[i][j] = true;
            }
        }
    }

    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (is_zero[i][j]) {
                for (auto [di, dj] : directions) {
                    int ni = i + di;
                    int nj = j + dj;
                    if (ni >= 0 && ni < n && nj >= 0 && nj < n && is_zero[ni][nj]) {
                        dsu.unite(i * n + j, ni * n + nj);
                    }
                }
            }
        }
    }

    unordered_map<int, int> component_sizes;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (is_zero[i][j]) {
                int root = dsu.find(i * n + j);
                component_sizes[root] = dsu.size[root];
            }
        }
    }

    int max_size = 0;
    for (auto [root, size] : component_sizes) {
        if (size > max_size) {
            max_size = size;
        }
    }

    cout << max_size << '\n';
}


int main() {
    Fast_io;
    int t; cin>>t;
    while(t--) solve();
    return 0;
}