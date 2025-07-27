#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0, ed = s.size()-1;
        
        while(st<=ed){
            while (st < ed and !isalnum(s[st])) st++;
            while (st < ed and !isalnum(s[ed])) ed--;
            s[st] = tolower(s[st]);
            s[ed] = tolower(s[ed]);
            if(s[st]==s[ed]){
                st++;
                ed--;
            }else return false;
        }
        return true;
    }
};