#include<bits/stdc++.h>
using namespace std;

int digitcount(int n){
    return log10(n);
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin >> n;
        string s = to_string(n);
        string tmp="";
        if(s[0]=='1' && s[1]=='0'){
            for(int i = 2; i<s.size();i++){
                tmp+=s[i];
            }
            if(((tmp[0]-'0')>=1)&&stoi(tmp)>=2){
                cout<<"YES"<<endl;
            }else{
            cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
}