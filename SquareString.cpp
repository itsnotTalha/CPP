#include<bits/stdc++.h>
using namespace std;
string solve(){
        bool chk=true;
        string s;
        cin>>s;
        if(s.size()<2){
            return "NO";
        }else if(s.size()%2!=0){
            return "NO";
        }
        else{
            for(int i=0;i<s.size()/2;i++){
                if(s[i]!=s[(s.size()/2)+i]){
                chk=false;
                break;
                }
            }
        }
        return (chk ? "YES" : "NO");
}
int main(){
    int t;
    cin>>t;
    vector<string>vc(t);
    for(int k=0;k<t;k++){
        vc[k]=solve();
    }
    for(string x:vc){
        cout<<x<<endl;
    }
    return 0;
}