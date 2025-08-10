#include<bits/stdc++.h>
using namespace std;
// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//       vector<pair<string,int>>tmp1;
//       for(int i = 0; i<strs.size(); i++){
//         tmp1.push_back(make_pair(strs[i], i));
//       }
//       sort(tmp1.begin(), tmp1.end());
//       for(auto &a : tmp1){
//         cout<<a.first<<" ";
//       }
//     }
// };

int main(){
    vector<vector<string>> ans;
    vector<string>strs;
    for(int i = 0; i<6; i++){
        string s;
        cin>>s;
        strs.push_back(s);
    }
    unordered_map<string, vector<string>> res;
    vector<pair<string,int>>tmp1;
      for(int i = 0; i<strs.size(); i++){
        tmp1.push_back(make_pair(strs[i], i));
      }
      sort(tmp1.begin(), tmp1.end());
      for(auto &a : strs){
        string s = a;
        sort(s.begin(), s.end());
        res[s].push_back(a);
      }
      for(auto &a : res){
        ans.push_back(a.second);
      }
    return ans;
}