#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b; cin>>a>>b;
    if(a+1==b or a-1==b) cout<<"Yes"<<endl;
    else if(a==10 and b== 1) cout<<"Yes"<<endl;
    else if(a==1 and b==10) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}