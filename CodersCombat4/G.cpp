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
unordered_map<int,int>ass;
vector<int>ss;
void solved(){
    int q; cin>>q;
    if(q==1){
        int x; cin>>x;
        ss.pb(x);
        ass[x] = 0;
    }else if(q==2){
        int l,r,val; cin>>l>>r>>val;
        for(int i = l+1; i<r; i++){
            for(int a : ss) if(a==i) ass[i] += val;
        } 
    }else if(q==3){
        int x; cin>>x;
        cout<<ass[x];nl;
    }
}

signed main(){
    fastio;
     int t; cin>>t;
     while(t--)
    solved();
    return 0;
}