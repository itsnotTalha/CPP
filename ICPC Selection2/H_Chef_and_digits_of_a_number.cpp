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
int aCount(int n){
    if(n==0) return 0;
    return (n%10) + aCount(n/10);
}
int SCount(int n){
    if(n==0) return 0;
    return 1 + SCount(n/10);
}

int main() {
    Fast_io;
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int sz = SCount(n);
        int a = aCount(n);
        int b = sz-a;
        bool ans = false;
        if(sz==1) ans = true;
        if(sz==2 and (a!=b)) ans = true;
        if((a==1 or b==1) and sz > 2) ans = false;
        cout<<(ans?"Yes" : "No")<<endl;
    }
    return 0;
}