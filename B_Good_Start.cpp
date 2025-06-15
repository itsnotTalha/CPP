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

bool hobeNaki(ll w, ll h, ll a, ll b, ll x1, ll x2, ll y1, ll y2) {
    int rx1 = ((x1 % a) + a) % a;
     int rx2 = ((x2 % a) + a) % a;
    int ry1 = ((y1 % b) + b) % b;
    int ry2 = ((y2 % b) + b) % b;
    bool verti =  (rx1 == rx2) and ((x1 != x2) or (ry1 == ry2));
    bool horiz = (ry1 == ry2) and ((y1 != y2) or (rx1 == rx2));
    return verti or horiz;
}

int main() {
    Fast_io;
    int t; cin>>t;
    while(t--){
        ll w,h,a,b; cin>>w>>h>>a>>b;
        ll x1, x2, y1, y2; cin>>x1>>y1>>y1>>y2;
        cout<<(hobeNaki(w,h,a,b, x1, x2, y1, y2) ? "YES" : "NO")<<endl;
    }
    return 0;
}