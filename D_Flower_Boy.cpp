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
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        vi a(n), b(m);
        ip(a,n);
        ip(b,m);
        sort(all(a), greater<int>());
        sort(all(b), greater<int>());
        int op = 1;
        int ans = -1;
        vi abc;
        for0(i,m){
            if(a[i]<b[i]) abc.pb(b[i]);
            //cout<<a[i]<<" BBB "<<b[i]<<endl;
        }
        if(abc.size()==2) ans = abc.front();
        else if(abc.size()==0) ans = 0;
        cout<<ans<<endl;
    }
    return 0;
}