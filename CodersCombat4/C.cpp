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
    string a,b; cin>>a>>b;
    for0(i,a.size()){
        if(tolower(a[i])<tolower(b[i])){
            cout<<-1;
            return;
        }else if(tolower(a[i])>tolower(b[i])){
            cout<<1;
            return;
        }else{

        }
    }
    cout<<0;
}

signed main(){
    fastio;
    //  int t; cin>>t;
    //  while(t--)
    solved();
    return 0;
}