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

void solve(){
    ll n, m;
    cin>>n>>m;
    vi a(n), b(m);
    for0(i,n){
        cin>>a[i];
    }
    for0(i, m){
        cin>>b[i];
    }
    sort(all(a), greater<int>());
    sort(all(b), greater<int>());
    int cnt = 0;
    int k = 0;
    int chk = 1;
    int pos = 0;
    
    for0(i, m) {
        if (pos < n && a[pos] >= b[i]) {
            cnt++;
            pos++;
        } else {
            if (k == 0) {
                k = b[i];
                cnt++;
            } else {
                chk = 0;
                break;
            }
        }
    }
    
    if (cnt == m && chk) {
        cout << (k == 0 ? 0 : k) << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    Fast_io;
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}