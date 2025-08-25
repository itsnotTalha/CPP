#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long a, b; cin>>a>>b;
        long long ans = (a*a)-(2*b);
        if(ans==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}