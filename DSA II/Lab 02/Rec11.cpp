#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s){
    if(s.empty()) return true;
    return s.front()==s.back() ? palindrome(s.substr(1,s.size()-2)) : false;
}
int main(){
    cout<<palindrome("racecar");
}
