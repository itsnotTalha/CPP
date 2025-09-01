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
    string s,d; cin>>s>>d;
    int ans;
    if(s=="sick" and d == "fine") ans = 2;
    else if (s=="sick" and d == "sick") ans = 1;
    else if(s=="fine" and d =="sick") ans = 3;
    else ans = 4;
    cout<<ans<<endl;
    return 0;
}