#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    unordered_map<char, int> freq;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        for(char x : s){
            freq[x]++;
        }
    }
    for(auto j : freq){
        cout<<j.first<<" "<<j.second<<endl;
    }
    cout<<freq.size();
}