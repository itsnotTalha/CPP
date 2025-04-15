#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s;
        cin>>s;
        string tmp = s;
        bool chk = true;
        for(int i =0;i<s.size();i++){
           if(s[i]!=s[0]) {
            swap(s[i], s[s.size()-i-1]);
            chk = false;
            break;
           }
        }
        if(s==tmp){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl<<s<<endl;
        }
    }
}