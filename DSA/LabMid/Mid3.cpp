#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t;
    cin>>s>>t;
    int  sSize = s.size();
    int  tSize = t.size();
    vector<char>stc1;
    vector<char>stc2;

    for(int i =0; i<sSize;i++){
        if(s[i]=='#') stc1.pop_back();
        else{
            stc1.push_back(s[i]);
        }
    }

    for(int i =0; i<tSize;i++){
        if(t[i]=='#') stc2.pop_back();
        else{
            stc2.push_back(t[i]);
        }
    }
    bool chk = true;
    while(!stc1.empty() && !stc2.empty()){
        if(stc1.back()==stc2.back()){
            stc1.pop_back();
            stc2.pop_back();
        }else{
            chk = false;
            break;
        }
    }

    
    if(chk) cout<<"true"<<endl;
    else cout<<"false"<<endl;
}
