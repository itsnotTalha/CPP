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
#define print(x) cout<<x
#define line cout<<endl

int main() {
    Fast_io;
    int num; cin>>num;
    vector<int> ev, od, digits;
    int temp = num;
    while (temp) {
        int d = temp % 10;
        if (d % 2 == 0) ev.pb(d);
        else od.pb(d);
        digits.pb(d);
        temp /= 10;
    }

    sortall(ev);
    sortall(od);

    int ans = 0;

    for (int k = digits.size() - 1; k >= 0; k--) {
        int d = digits[k];
        if (d % 2 == 0) {
            ans = ans * 10 + ev.back();
            ev.ppb();
        } else {
            ans = ans * 10 + od.back();
            od.ppb();
        }
    }

    print(ans);
    return 0;
}