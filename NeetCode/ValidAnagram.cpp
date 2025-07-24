#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s==t) return true;
    else return false;
}
//Preferrable solution
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> a1,a2;
        for(int i = 0; i<s.size(); i++){
            a1[s[i]]++;
        }
        for(int i = 0; i<t.size(); i++){
            a2[t[i]]++;
        }
        if(a1==a2) return true;
        else return false;        
    }
};
