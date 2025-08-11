#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<string>st;
    
        string encode(vector<string>& strs) {
            st = strs;
            string s;
            for(string x : strs) s+=x;
            return s;
        }
    
        vector<string> decode(string s) {
            return st;
        }
    };
    