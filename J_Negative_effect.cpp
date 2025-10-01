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


ll getSum(vector<int>&a, int i, int m){
        int original = a[i];
        
        a[i] = m;
        
        ll Maxsum = INT_MIN;
        ll current = 0;
        for (int j = 0; j < a.size(); j++) {
            current = max((ll)a[j], current + a[j]);
            Maxsum = max(Maxsum, current);
        }
   
        a[i] = original;
    return Maxsum;
}

int main() {
    Fast_io;
    ll n,m; cin>>n>>m;
    vector<int> a(n);
    ip(a,n);
    for(int i = 0; i<n; i++){
        cout<<getSum(a, i, m)<<" ";
    }
    return 0;
}