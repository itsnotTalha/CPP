#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int m=1, t=1;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            t++;
        } else {
            m = max(m, t);
            t = 1;
        }
    }
    m = max(m, t);
    cout<<m<<endl;
}