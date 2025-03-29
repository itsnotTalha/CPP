#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int sz = s.size();
    int sum=0;
    for(int i=0;i<sz;i++){
        sum+=(abs(s[i]-'a'-26))*(i+1);
    }
    cout<<sum;
}