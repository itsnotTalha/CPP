#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false);cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define int long long
#define for0(i,j) for(auto i = 0; i<j; i++)
#define for1(i,j) for(auto i=1;i<=j;i++)
#define sortall(x) sort(all(x))
#define cpin(x,i) for0(j,i)cin>>x[j]
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define nl cout<<"\n"
bool isPrime(int n){
    if(n<2) return false;
    for(int i = 2; i*i<=n; i++) if(n%i==0) return false;
    return true;
}

void solved(){
    string s;
    getline(cin, s);
    int sum = 0;
    for0(i,s.size()){
        if(s[i]>='0' and s[i]<='9') sum+=(s[i]-'0');
    }
    if(sum%3==0) yes;
    else no;
}

signed main(){
    fastio;
    // int t; cin>>t;
    // while(t--)
    solved();
    return 0;
}