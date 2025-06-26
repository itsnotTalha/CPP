#include<bits/stdc++.h>
using namespace std;
int main(){
    string word = "xyxzxe";
    char ch = 'z';
    stack<char> s;
    bool found = false;
    for(int i = 0; i<word.size(); i++){
        s.push(word[i]);
        if(word[i]==ch){
            found = true;
            break;
        }
    }
    if(found){
        for(int i = 0; i<word.size(); i++){
            word[i]= s.top();
            s.pop();
            if(s.empty()) break;
        }
    }
    cout<<word;
}