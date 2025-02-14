#include<bits/stdc++.h>
using namespace std;
string solve(){
    string s="abc", a;
    cin>>a;
    if (a == s) {
               return "YES";
    } else if (a == "acb" || a == "bac" || a == "cba") {
               return "YES";
    } else {
       return "NO";
    }
}

int main(){
    int t;
    cin>>t;
    string a[t];
    for(int i=0; i<t;i++){
        a[i]=solve();
    }
    for(string x:a){
        cout<<x<<endl;
    }
    return 0;
}