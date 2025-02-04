#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,tmp="";
    set<char> uniqueLetters;
    int count=0;
    getline(cin,s);
    for(int i=0; i<s.size();i++){
        if(s[i]==','&&i>0){
            tmp+=s[i-1];
        }else if(i==s.size()-1&&i>1){
            tmp+=s[i-1];
        }
    }
    for(char c : tmp){
        uniqueLetters.insert(c);
    }
    cout<<uniqueLetters.size();
    return 0;
}