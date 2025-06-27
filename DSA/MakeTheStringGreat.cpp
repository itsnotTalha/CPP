#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "leEeetcode";
    stack<char>str;
    for(int i = 0; i<s.size(); i++){
        if(!str.empty() and (s[i]==str.top()+32 or s[i]==str.top()-32)){
            str.pop();
        }else str.push(s[i]);
    }
    string tmp = "";
    
    while(!str.empty()) {
        tmp += str.top();
        str.pop();
    }
    
    s = tmp;
    reverse(s.begin(), s.end());
    cout<<s;
}