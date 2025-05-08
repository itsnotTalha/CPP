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
    ll n; cin>>n;
    vector<ll> p(n);
    vector<ll> a(n);
    vector<ll> b(n);
    ip(p,n);
    ip(a,n);
    ip(b,n);
    ll m; cin>>m;
    vector<ll> c(m);
    ip(c,m);
    vector<ll>ans(m,-1);
    map<ll,set<ll>>setf,setb;
    for0(i,n){
        setf[a[i]].insert(p[i]);
        setb[b[i]].insert(p[i]);
    }

    
    // for0(i,m){
    //     ans[i]=INT_MAX;
    //     int tmp;
    //     for0(j,n){
    //         if((a[j]==c[i]||b[j]==c[i])&&p[j]>0){
    //             if (p[j] < ans[i]) {
    //                 ans[i] = p[j];
    //                 tmp = j;
    //             }
    //         }
    //     }
    //     p[tmp]=0;
    //     if(ans[i]==INT_MAX) ans[i]= -1;
    // }
    for(auto x : setf){
        cout<<x.ff<<" ";
    }
    cout<<endl;
    return 0;
}