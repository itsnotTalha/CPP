#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t; 
    cin.ignore();
    while(t--){
        string s, ans="";
        getline(cin, s);
        ans+=s[0];
        for(int i = 0; i<s.size(); i++){
            if(s[i]==' ') ans+=s[i+1];
        }
        cout<<ans<<endl;
    }
}