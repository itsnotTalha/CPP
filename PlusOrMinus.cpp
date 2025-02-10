#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s[t];
    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        s[i]=(a+b==c ? "+":"-");
    }
    for(string f : s){
        cout<<f<<endl;
    }
    return 0;
}