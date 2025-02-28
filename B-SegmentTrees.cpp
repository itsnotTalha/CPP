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
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;
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
        vii up;
        ll gMax = 0; 
    
        for0(i, n) {
            cin >> a[i];
        }

        int q;
        cin >> q;

        for0(i, q) {
            short choice;
            cin >> choice;
            if (choice == 1) {
                ll x, p;
                cin >> x >> p;
                x--;
                up.push_back({x, p});
            } else {
                ll v;
                cin >> v;
                gMax = max(gMax, v);
            }
        }

        for0(i, n) {
            a[i] = max(a[i], gMax);
        }

        for (auto [index, value] : up) {
            a[index] = value;
        }

        for0(i, n) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
