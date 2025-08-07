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
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        if(s[0]=='1' and s[1]>='2' or s[0]>'1'){
            string s1 = s.substr(0, 2);
            int h =  stoi(s1);
            if(h==12) h=24;
            h-=12;
            s1 = to_string(h);
            if(s1.size()==1){
                s[0] = '0';
                s[1] = s1[0];
            }else if(s1.size()==0){
                s[0] = '0';
                s[1] = '0';
            }
            else{
                s[0] = s1[0];
                s[1] = s1[1];
            } 
            s+=" PM";
        }else if(s[0]=='0' and s[1] == '0'){
            s[0] = '1';
            s[1] = '2';
            s+=" AM";
        }else{
            s+=" AM";
        }
        cout<<s<<endl;
    }   
    return 0;
}