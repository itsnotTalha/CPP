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
    int t; cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int r=0, l=0;
        bool ans = 0;
        while(r<a.size() and l<b.size()){
            if(a[r]==b[l]){
                r++; l++;
                ans = 1;
            }else{
                l++;
                ans = 0;
            }
        }
        cout<<(ans?"YES":"NO")<<endl;
    }
    return 0;
}

/*
Bruteforce
l=0 and r=0
john johanna
j = j r++ l++
o = o r++ l++
h = h r++ l++
n = a -> l++
n = n r++ l++
r<=a.size and l<=b.size

*/