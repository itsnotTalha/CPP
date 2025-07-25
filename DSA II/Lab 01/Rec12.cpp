#include<bits/stdc++.h>
using namespace std;
void removeSp(string &s){
    if(s.empty()) return;
    if (s[0] == ' ') {
        s.erase(0, 1); 
        removeSp(s);   
    } else {
        string rest = s.substr(1);
        removeSp(rest);
        s = s[0] + rest;  
    }
}
int main(){
    string s = "Amar shonar bangla";
    removeSp(s);
    cout<<s;
}