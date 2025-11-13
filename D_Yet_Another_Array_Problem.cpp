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

void solve(){
    int n; cin>>n;
    vector<int>a(n);
    ip(a,n);

    int a2=0,a3=0,a5=0,a7=0,a13=0,a11=0;

    for0(i, n){
        if(__gcd(a[i],2)==1){
            a2++;
        }
        if(__gcd(a[i],3)==1){
            a3++;
        }
        if(__gcd(a[i],5)==1){
            a5++;
        }
        if(__gcd(a[i],7)==1){
            a7++;
        }
        if(__gcd(a[i],11)==1){
            a7++;
        }
        if(__gcd(a[i],7)==13){
            a7++;
        }
    }

    //cout<<a2<<" "<<a3<<" "<<a5<<endl;
    if(a2>0)cout<<2<<endl;
    else if(a3>0) cout<<3<<endl;
    else if(a5>0) cout<<5<<endl;
    else if(a7>0) cout<<7<<endl;
    else if(a11>0) cout<<7<<endl;
    else if(a13>0) cout<<7<<endl;
    else cout<<-1<<endl;
}

int main() {
    Fast_io;
    int t; cin>>t;
    while(t--){
        solve();
    }   
    return 0;
}