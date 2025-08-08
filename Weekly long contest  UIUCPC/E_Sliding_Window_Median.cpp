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

int main() {
    Fast_io;
    int n,k; cin>>n>>k;
    vector<int> a(n); 
    ip(a,n);   
    vector<int>ans;
    for0(i, n-k+1){
        vi sv(a.begin()+i, a.begin()+(i+k));
        sort(all(sv));
        if(sv.size()%2==0){
            int tmp = sv[k/2-1];
            ans.pb(tmp);
        }else{
            int tmp = sv[k/2];
            ans.pb(tmp);
        }
    }
    for(int x : ans) cout<<x<<" ";
    cout<<endl;
    return 0;
}