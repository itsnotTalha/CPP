#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4];
    int total=0;
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    string s;
    cin>>s;
    for(int i=0; i<s.size();i++){
        total+=a[(s[i]-'0')-1];
    }
    cout<<total;
    return 0;
}