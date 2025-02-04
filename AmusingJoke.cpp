#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2, s3;
    cin >> s1;
    cin >> s2;
    cin >> s3;
    map<char,int>str1,str2;
    for(char c : s1){
        str1[c]++;
    }
    for(char c : s2){
        str1[c]++;
    }
    for(char c : s3){
        str2[c]++;
    }
    cout<<(str1==str2 ?"YES":"NO");
    return 0;
}