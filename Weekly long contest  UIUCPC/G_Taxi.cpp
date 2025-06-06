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
    int n; cin>>n;
    vi a(5);
    for0(i,n){
        int tmp; cin>>tmp;
        a[tmp]++;
    }
    ll taxi = a[4];
    a.pop_back();
    if(a[3]>a[1]){
        taxi+=a[3];
        a[1]=0;
        a.pop_back();
    }else{
        taxi+=a[3];
        a[1]-=a[3];
        a.pop_back();
    }
    taxi+=a[2]/2;
    if(a[2]%2!=0){
        taxi++;
        if(a[1]>1){
            a[1]-=2;
        }
        if(a[1]==1) a[1]--;
    }
    taxi+=a[1]/4;
    if(a[1]%4!=0) taxi++;

    cout<<taxi<<endl;
    return 0;
}