#include<bits/stdc++.h>
using namespace std;
int solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b){
        return c;
    }else if(a==c){
        return b;
    }else{
        return a;
    }
}
int main(){
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        a[i]=solve();
    }
    for(int x : a){
        cout<<x<<endl;
    }
    return 0;
}