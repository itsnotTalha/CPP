#include<bits/stdc++.h>
using namespace std;
string solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>=10){
        return "YES";
    }else if(a+c>=10){
        return "YES";
    }else if(b+c>=10){
        return "YES";
    }else {
        return "NO";
    }
}
int main(){
    int t;
    cin>>t;
    string a[t];
    for(int i=0;i<t;i++){
        a[i]=solve();
    }
    for(string z : a){
        cout<<z<<endl;
    }
    return 0;
}