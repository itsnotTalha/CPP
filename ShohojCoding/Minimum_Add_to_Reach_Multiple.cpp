#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int a,b; cin>>a>>b;
        int x = 0;
        while((a+x)%b!=0) x++;
        cout<<x<<endl;
    }
}