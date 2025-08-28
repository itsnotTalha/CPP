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
    int n,k; cin>>n>>k;
    vector<int>tmp(n);
    cpin(tmp,n);
    sortall(tmp);
    unordered_map<int,int>hashh;
    for0(i,n) hashh[tmp[i]]++;
    if(hashh.size()<k) cout<<n;
    else{
        int tar = 1, pos = -1;
        int ans = 0;
        for(auto x : hashh){
            if(tar==k){
                pos = x.first;
            }else tar++;
            if(x.first>pos)
            ans+=x.second;
        }
        cout<<ans;
    }
}

signed main(){
    fastio;
    //  int t; cin>>t;
    //  while(t--)
    solved();
    return 0;
}