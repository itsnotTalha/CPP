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
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N,M;
    cin>>N>>M;
    int cnt=0;
    vector<pair<int, ll>> updates;
    for0(i,M){
        int u,v;
        cin>>u>>v;
        updates.pb({u,v});
    }
    for0(i,M){
        if((updates[i].fi==updates[i].se)||(updates[i].fi==updates[i+1].fi)||(updates[i].se==updates[i+1].se&&updates[i].fi<updates[i].se&&updates[i+1].se<updates[i+1].fi)){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}