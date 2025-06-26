#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="abbaca";
    stack<char> str;
    for(char x : s){
        if(!str.empty() and x==str.top()) str.pop();
        else str.push(x);
    }
    string ans = "";
    while(!str.empty()){
        ans += str.top();
        str.pop();
    }
    reverse(ans.begin(), ans.end());
    cout<<ans;
}