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
#define print(x) cout<<x
#define line cout<<endl

int main() {
    Fast_io;
    int num; cin>>num;
    string s = to_string(num);
    vector<int>ev;
    vector<int>od;
    vector<int>nums;
    int chk = 1;
    for0(i,s.size()){
        if(i%2==0){
            od.pb(s[i]-'0');
        }else{
            ev.pb(s[i]-'0');
        }
        nums.emplace_back(s[s.size()-i-1]-'0');
    }
    // sort(all(od),greater<int>());
    // sort(all(ev),greater<int>());
    sortall(od);
    sortall(ev);
    int ans = 0;
    //ll s = chk;
    vector<int>solver(s.size());
        int i=0;
        int j=0;
        int k=0;
        int t = s.size();
        while(t--){
            if(nums[i]%2){
                solver[i]=(od[j++]);
            }
            else{
                solver[i]=(ev[k++]);
            }
            i++;
        }
        for(int i=solver.size()-1;i>=0;i--){
            ans=ans*10+solver[i];
        }
    print(ans);
    return 0;
}