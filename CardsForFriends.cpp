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
    int t;
    cin>>t;
    while(t--){
        long long int w,h,n,cnt=1;
        cin>>w>>h>>n;
        while(w%2==0||h%2==0){
            if(w%2==0){
                cnt*=2;
                w/=2;
            }else{
                cnt*=2;
                h/=2;
            }
        }
        cout<<(cnt>=n?"YES":"NO")<<endl;

    }
    return 0;
}