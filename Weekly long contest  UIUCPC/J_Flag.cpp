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

bool allSame(string s) {
    int n = s.length();
    if (n == 0) return true;
    for0(i,n){
        if (s[i] != s[0])
            return false;
    }
    return true;
}

int main() {
    Fast_io;
    int n, m; cin>>n>>m;
    vector<string>s(n);
    ip(s,n);
    bool ans = true;
    for0(i,n){
        if(!allSame(s[i])){
            ans = false;
            break;
        }
    }
    if(ans){
        for0(i,n-1){
                if(s[i][0]==s[i+1][0]){
                    cout<<"NO"<<endl;
                    return 0;
                }
        }
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}