#include<bits/stdc++.h>
using namespace std;
int solve(){
    set<int>num;
    int a,b,c;
    cin>>a>>b>>c;
    num.insert(a);
    num.insert(b);
    num.insert(c);
    auto s = num.begin();
    ++s;
    return *s;
}
int main(){
    int t;
    cin>>t;
    int s[t];
    for(int i=0; i<t;i++){
        s[i]=solve();
    }
    for(int x : s){
        cout<<x<<endl;
    }
    return 0;
}