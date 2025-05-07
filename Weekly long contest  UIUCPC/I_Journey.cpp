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

void solve(){
    ll n, a, b, c;
    cin>>n>>a>>b>>c;
    ll sum = a+b+c;
    ll cyc = n/sum;
    ll rem = n%sum;
    if(rem==0){
        cout<<3*cyc<<endl;
    }else{
        ll day=0, total=0;
        if(rem>0){
            total+=a;
            day++;
        } 
        if(rem>total){
            total+=b;
            day++;
        }
        if(rem>total){
            total+=c;
            day++;
        }
        cout<<(3*cyc)+day<<endl;
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