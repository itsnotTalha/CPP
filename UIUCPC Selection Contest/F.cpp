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

// Loops
#define for0(i, n) for (int i = 0; i < int(n); i++)
#define FOR(i, x, y) for (int i = int(x); i < int(y); i++)
#define ROF(i, x, y) for (int i = int(x); i >= int(y); i--)



// Input Macros
#define si(x) scanf("%d", &x)
#define sii(x, y) scanf("%d %d", &x, &y)
#define siii(x, y, z) scanf("%d %d %d", &x, &y, &z)
#define sl(x) scanf("%lld", &x)
#define sll(x, y) scanf("%lld %lld", &x, &y)
#define slll(x, y, z) scanf("%lld %lld %lld", &x, &y, &z)


int main() {
    Fast_io;
    ll n; cin>>n;
    vi v(n+1);
    FOR(i,0,n){
        cin>>v[i];
    }
    ll cnt = 0;
    FOR(i, 1, n) {
        if (v[i-1] > v[i]) {
            cnt += v[i-1] - v[i];
            v[i] = v[i-1];
        }
    }
    cout<<cnt<<endl;
    return 0;
}