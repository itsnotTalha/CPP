#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "loveleetcode";
    unordered_map<char,int> freq;
    for(int i = 0; i<s.size(); i++){
        freq[s[i]]++;
    }
    int ans = -1;
    for(int i = 0; i<s.size(); i++){
        if(freq[s[i]]<2){
            ans = i;
            break;
        }
    }
    cout<<ans;
}