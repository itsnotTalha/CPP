#include<bits/stdc++.h>
using namespace std;
#define for0(i,x) for(int i=0;i<x;i++)
#define for1(i,x) for(int i=1; i<=x;i++)
#define MOD 1000000007 
typedef long long ll;

ll counting(int n){
    vector<ll>ans(n+1,0);
    if(n==0) return 1;
    ans[0]=1;
    for1(i,n){
        for1(j,6){
            if(i-j>=0){
                ans[i]=(ans[i]+ans[i-j])%MOD;
            }
        }
    }
    return ans[n];
}
int main(){
    int n;
    cin>>n;
    cout<<counting(n)<<endl;
}