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

struct Compare {
    bool operator()(int a, int b) {
        return a < b; 
    }
};

void solve(){
    ll n; cin>>n;
    //priority_queue<int, vector<int>,Compare> evn, odd;
    vector<ll> evn;
    deque<ll> odd;
    ll sum = 0;
    for(int i = 0; i<n; i++){
        ll t; cin>>t;
        if(t%2) odd.push_back(t);
        else evn.push_back(t);
    }
    if(!odd.empty()) sum = accumulate(all(evn),0LL);
    else {
        cout<<0<<endl;
        return;
    }
    sort(all(odd), greater<ll>());
    int i = 1;
    while(!odd.empty()){
        if(i%2){
            sum+=odd.front();
            odd.pop_front();
        }else{
            odd.pop_back();
        }
        i++;
    }
    cout<<sum<<endl;
}

int main() {
    Fast_io;
    int t; cin>>t;
    while(t--) solve();   
    return 0;
}