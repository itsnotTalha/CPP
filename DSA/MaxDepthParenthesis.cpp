#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="(1)+((2))+(((3)))";
    stack<char>str;
    int ans = 0;
    for(char c : s){
        if(c=='(') str.push(c);
        else if(c==')') str.pop();
        ans = max(ans, (int)str.size());
    }
    cout<<ans;
}