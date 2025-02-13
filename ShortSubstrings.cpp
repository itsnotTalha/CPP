#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string sArr[t];
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
         sArr[i] += s[0]; // Start with first character
        for (int j = 1; j < s.size(); j += 2) {  
            sArr[i] += s[j]; // Every second character contributes to 'a'
        }
    }
    for(string z : sArr){
        cout<<z<<endl;
    }
    return 0;
}