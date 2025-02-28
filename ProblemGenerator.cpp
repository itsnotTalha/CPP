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
       int freq[7]={0};
        int m,n,ans=0;
        cin>>n>>m;
        string s;
        cin>>s;
        for0(i,n){
            freq[s[i]-'A']++;
        }
       for0(i,7){
            if(freq[i]<m){
                ans+=m-freq[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}