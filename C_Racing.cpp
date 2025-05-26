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
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vi d(n);
        ip(d,n);
        vector<pii> range(n), validRange(n);
        for(auto &[x,y] : range) cin>>x>>y;

        int l = 0, r = 0;
        bool psbl = true;
        for0(i,n){
            if(d[i] == 1) { l++; r++; }
			if(d[i] == -1) { r++; }
 
			int nl = max(l, range[i].first);
			int nr = min(r, range[i].second);
 
			if(nl > nr) {
				psbl = false; break;
			}
			l = nl, r = nr;
            validRange[i] = MP(l,r);
        }
        if(!psbl) {
			cout << "-1\n";
			continue;
		}
        deque<int> ans;
		int poss = validRange[n-1].ss;
		for(int i = n-1; i > 0; i--) {
			if(d[i] != -1) {
				ans.push_front(d[i]);
				if(d[i]) poss--;
				continue;
			}
 
			if(poss <= validRange[i-1].ss) ans.push_front(0);
			else {ans.push_front(1); poss--;}
		}
		if(d[0] != -1) {
			ans.push_front(d[0]);
		}
		else {
			if(poss <= 0) ans.push_front(0);
			else ans.push_front(1);
		}
 
		for(auto &x : ans) cout << x << " ";
		cout << "\n";
    }
    return 0;
}