#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,m; cin>>t>>m;
    int total = t*(t+1)/2;
    if(m>=total) {
        cout<<0<<endl;
        return 0;
    }
    for(int i = 1; i<=t; i++){
        m-=i;
        if(m<0){
            cout<<(t-i+1)<<endl;
            return 0;
        }
    }
}