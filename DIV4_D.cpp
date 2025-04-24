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
#define for1(i, n) for (int i = 1; i < int(n); i++)
#define FOR(i, x, y) for (int i = int(x); i <= int(y); i++)
#define ROF(i, x, y) for (int i = int(x); i >= int(y); i--)



 
#define si(x) scanf("%d", &x)
#define sii(x, y) scanf("%d %d", &x, &y)
#define siii(x, y, z) scanf("%d %d %d", &x, &y, &z)
#define sl(x) scanf("%lld", &x)
#define sll(x, y) scanf("%lld %lld", &x, &y)
#define slll(x, y, z) scanf("%lld %lld %lld", &x, &y, &z)

void solve(){
    string s1, s2;
    cin>>s1>>s2;    
    vi a, b;
    int n = sz(s1);
    int m = sz(s2);
    
    // Initial checks
    if(m < n || m > 2 * n || s1[0] != s2[0]){
        cout<<"NO"<<endl;
        return;
    }
    
    // Process s1 segments
    int cnt = 1;
    for1(i,n){
        if(s1[i]!=s1[i-1]){
            a.pb(cnt);
            cnt = 1;
        } else {
            cnt++;
        }
    }
    a.pb(cnt);
    
    // Process s2 segments
    cnt = 1;
    for1(i,m){
        if(s2[i]!=s2[i-1]){
            b.pb(cnt);
            cnt = 1;
        } else {
            cnt++;
        }
    }
    b.pb(cnt);  
    
    // Compare segments
    if (a.size() != b.size()) {
        cout << "NO\n";
        return;
    }
    
    for(int i = 0; i < a.size(); i++){
        if(a[i] > b[i] || a[i] * 2 < b[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    int t; si(t);
    while(t--) solve();
    return 0;
}