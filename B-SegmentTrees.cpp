#include <bits/stdc++.h> 

#define for1(i, n) for (int i = 1; i <= (int)(n); ++i) 
#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(), (x).end() 
#define rall(x) (x).rbegin(), (x).rend()
#define sz(a) int((a).size())

using namespace std;

#define for0(i, n) for (int i = 0; i < (int)(n); ++i)
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vll a(n);
        for0(i, n) {
            cin >> a[i];
        }
        vector<pair<int, ll>> updates; 
        int q;
        cin >> q;
        vvll tmp;
        ll gMax = LLONG_MIN;
                
        for0(i, q) {
            short choice;
            cin >> choice;
            if (choice == 1) {
                ll x, p;
                cin >> x >> p;
                x--;
                updates.pb({x, p});
            } else {
                ll v;
                cin >> v;
                gMax = max(a[i],v);
            }
        }

        for0(i, n) {
            a[i] = max(a[i], gMax);
        }

        for (auto& update : updates) {
            int idx = update.fi;
            ll new_val = update.se;
            a[idx] =  new_val;  
        }

        for0(i, n) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
