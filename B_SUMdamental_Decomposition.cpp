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
    int t;
    cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;
        if (n == 1) {
            if (x >= 1) {
                cout << x << endl;
            } else {
                cout << -1 << endl;
            }
        } else if (n == 2) {
            if (x == 0) {
                cout << 2 << endl;
            } else {
                long long b = 1 ^ x;
                if (b >= 1) {
                    cout << 1 + b << endl;
                } else {
                    cout << -1 << endl;
                }
            }
        } else {
            long long prefix_xor = (n - 2) % 2 == 1 ? 1 : 0;
            long long required = prefix_xor ^ x;
            if (required == 0) {
                cout << n << endl;
            } else {
                long long a = 1;
                long long b = required ^ a;
                if (b > 0 && a != b) {
                    cout << (n - 2) + a + b << endl;
                } else {
                    a = 2;
                    b = 3;
                    if ((a ^ b) == required) {
                        cout << (n - 2) + a + b << endl;
                    } else {
                        a = (1LL << 29);
                        b = a ^ required;
                        cout << (n - 2) + a + b << endl;
                    }
                }
            }
        }
    }
    return 0;
}