#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    string s = bitset<32>(n).to_string();
    bool found = false;
    for(int i = 0; i<s.size(); i++){
        if(found==false and s[i]=='1'){
            found=true;
            continue;
        } 
        if(found) s[i] = '0';
    }
    int num = stoi(s, nullptr, 2);
    cout<<num<<endl;
}