#include<bits/stdc++.h>
using namespace std;
bool palindrome(string &s,int i, int n){
    if(i == n/2-1){
        return s[i]==s[n-i-1];
    }
    return s[i] == s[n-i-1] and palindrome(s, i+1, n);
}
int main(){
    string s = "abghhgba";
    bool ans = palindrome(s, 0, s.size());
    cout<<ans<<endl;
}

/*
a a c a a
0 1 2 3 4 
5/2-1 =  1
5-1-1 = 3
mid = 3
if n odd return true
0 1 2 3 
return n/2-1==(n-n/2-1)
n = 4
n/2 = 1
4-1-1 = 2
5 0
i!=5/2-1
5 1
1 == 1 return
a b g h g b a
0 1 2 3 4 5 6
7/2-1=2
*/