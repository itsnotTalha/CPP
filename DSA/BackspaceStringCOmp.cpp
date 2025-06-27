#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="y#fo##f", t="y#f#o##f";
    stack<char> a, b;
    for(char c : s){
        if(!a.empty() and c=='#') a.pop();
        else if(c=='#') continue;
        else a.push(c);
    }
    for(char c : t){
        if(!b.empty() and c=='#') b.pop();
        else if(c=='#') continue;
        else b.push(c);
    }
    bool ans = a==b;
    cout<<ans;
}