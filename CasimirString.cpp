#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int sz = s.size();
        int acnt=0, bcnt=0, ccnt=0;
        for(int i = 0; i<sz;i++){
            if(s[i]=='A') acnt++;
            else if (s[i]=='B') bcnt++;
            else ccnt++;
        }

        if(acnt+ccnt == bcnt) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}