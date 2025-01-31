#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, t,temp;
    cin >> s >> t;
    for(int i=0; i<s.size();i++){
    temp+=s[s.size()-i-1];
    }
    if(t==temp){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}