#include<bits/stdc++.h>
using namespace std;
int wordCount(string s){
    int count = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]==' ') count++;
    }
    return count+1;
}
int main(){
    string s;
    getline(cin, s);
    int ans = wordCount(s)*2-1;
    cout<<ans<<endl;
}