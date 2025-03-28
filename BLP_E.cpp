#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        a-=c;
        b-=d;
        int x = min(a,b);
        if(a==b)cout<<"Any"<<endl;
        else if(x==a) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
}