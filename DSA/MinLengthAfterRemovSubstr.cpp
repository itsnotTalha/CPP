#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="ABFCACDB";
    stack<char>str;
    for(char c : s){
        if(!str.empty() and c == 'B'){
            if(str.top()=='A') str.pop();
            else str.push(c);
        }else if(!str.empty() and c == 'D'){
            if(str.top()=='C') str.pop();
            else str.push(c);
        }else{
            str.push(c);
        }
    }
    cout<<str.size();
}