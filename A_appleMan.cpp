#include <bits/stdc++.h>
using namespace std;

#define Fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

typedef long long ll;
typedef vector<int> vi;
typedef deque<int> di;
typedef pair<int, int> pii;

#define pb push_back
#define ppb pop_back
#define MP make_pair
#define ff first
#define ss second
#define pf push_front
#define ppf pop_front
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
    int n; cin>>n;
    vector<string>s(n);
    ip(s,n);
    bool chk= false;
    for0(j,n){
        chk = false;
        for0(i,n){
            if(s[j][i]=='o') chk = true;
        }
        if(chk==false) {
            cout<<"NO\n";
            return;
        }
    }
    for0(j,n){
        chk = false;
        for0(i,n){
            if(s[i][j]=='o') chk = true;
        }
        if(chk==false) {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}

int main() {
    Fast_io;
    solve();   
    return 0;
}