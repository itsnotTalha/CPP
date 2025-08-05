#include<bits/stdc++.h>
using namespace std;
bool ispal(string s){
    if(s.empty()) return true;
    return s.front()==s.back() ? ispal(s.substr(1,s.size()-2)) : false;
}
int sum(string s){
    if(s.empty()) return 0;
    int n = s[0]-'0';
    return n + sum(s.substr(1));
}
int main(){
    int t; cin>>t;
    while(t--){
        string n; cin>>n;
        if(sum(n)%3==0){
            cout<<"YES"<<endl;
            cout<<(ispal(n)?"Palindrome\n":"Not a Palindrome\n");
        }else cout<<"NO\n";
    }
}