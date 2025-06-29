#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin >> s;
    for(int i=0; i<s.size(); i+=2){
        t+=s[i];
    }
    sort(t.begin(), t.end());
    int j=0;
    for(int i = 0; i<s.size();i+=2){
        s[i]=t[j];
        j++;        
    }
    cout << s;
    return 0;
}