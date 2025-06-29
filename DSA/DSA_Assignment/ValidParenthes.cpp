#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    stack<char> str;
    for(char c : s){
        if(c=='(' or c=='{' or c=='['){
            str.push(c);
        }else{
            if(str.empty()){
                str.push('x');
                break;
            }
            if ((c == ')' && str.top() == '(') ||
                (c == '}' && str.top() == '{') ||
                (c == ']' && str.top() == '[')) {
                str.pop();
            }else{
                str.push('x');
            }
        }
    }
    bool ans = str.empty();
     cout<< ans;
}