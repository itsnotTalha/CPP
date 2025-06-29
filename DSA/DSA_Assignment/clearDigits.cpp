#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "cb34";
    stack<char>str;
    for(char c : s){
        if(!str.empty() and (c>='0' and c<='9')){
            str.pop();
        }else{
            str.push(c);
        }
    }
    s = "";
    while(!str.empty()){
        s+=str.top();
        str.pop();
    }
    reverse(s.begin(), s.end());
    cout<<s;
}