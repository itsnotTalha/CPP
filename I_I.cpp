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

bool ifContain(string s, int l, int r){
    unordered_map<char,int> hashMap;
    hashMap['k'] = 0;
    hashMap['e'] = 0;
    hashMap['o'] = 0;
    for(char x : s){
        hashMap[x]++;
    }
    return hashMap['k']>=2 and hashMap['e']>=1 and hashMap['o']>=1;
}

int main() {
    Fast_io;
    int n, q; cin>>n>>q;
    int total = 0;
    while(q--){
        int l,r; cin>>l>>r;

    }
    return 0;
}

int st = 4, en = 2
while(i!=1){
    
}