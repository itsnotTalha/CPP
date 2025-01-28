#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    bool chk=false;
    cin>>str;
    for(int i = 0; i<str.size()/2;i++){
        if(str[i]==str[str.size()-i-1]){
            chk = true;
        }else{
            chk = false;
            break;
        }
    }
    if(chk){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}