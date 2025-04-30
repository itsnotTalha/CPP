#include <bits/stdc++.h>
using namespace std;

#define Fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
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

#define ip(a, n) for0(i, n) cin >> a[i]

int main() {
    Fast_io;
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vl a(n);
        ip(a, n);
        vl pref(n);
        pref[0] = a[0];
        for1(i, n-1){
            pref[i] = max(pref[i-1], a[i]);
        }

        ll sum = 0;
        ROF(i, n-1, 0){
            cout<<sum+pref[i]<<" ";
            sum+=a[i];
        }
        cout<<endl;       
    }
    return 0;
}