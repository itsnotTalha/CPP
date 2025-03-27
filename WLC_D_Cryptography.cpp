#include<bits/stdc++.h>
using namespace std;
#define for0(i,x) for(int i=0;i<x;i++)
#define for1(i,x) for(int i=1;i<=x;i++)
typedef long long ll;

const int maxLimit=200000;
vector<bool>prime(maxLimit+1,true);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    prime[0]=prime[1]=false;
        for(int i=2;i*i<=maxLimit;i++){
            if(prime[i])
            for(int j=i*i;j<=maxLimit;j+=i){
                prime[j]=false;
            }
        }
        vector<ll>ans;
        //int i=2;
        for (int i = 2; i <= maxLimit; i++) {
            if (prime[i]) {
                ans.push_back(i);  
            }
        }
    int k;
    cin>>k;
    while(k--){
        int n,i=2,x=2;
        cin>>n;
        int cnt=0;
        
        cout<<ans[n-1]<<endl;
        //cout<<searchP(n)<<endl;
    }
}