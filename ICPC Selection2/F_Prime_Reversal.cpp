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

#define for0(i, n) for (int i = 0; i < int(n); i++)
#define for1(i, n) for (int i = 1; i <= int(n); i++)

#define ip(a, n) for0(i, n) cin >> a[i]


int main() {
    Fast_io;
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        string a, b; cin>>a>>b;
        ll acnt = 0, bcnt = 0;
        ll acnt1 = 0, bcnt1 = 0;

        for0(i, n){
            if(b[i]=='1') bcnt1++;
            else acnt1++;
            if(a[i]=='1') bcnt++;
            else acnt++;
        }
        if(acnt == acnt1 and bcnt == bcnt1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}