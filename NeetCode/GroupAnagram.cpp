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
    vector<pair<string,int>>tmp1;
      for(int i = 0; i<strs.size(); i++){
        tmp1.push_back(make_pair(strs[i], i));
      }
      sort(tmp1.begin(), tmp1.end());
      for(auto &a : tmp1){
        sort(a.first.begin(), a.first.end());
      }
      vector<string> prev;
      for(auto &a : tmp1){
        if(prev.empty()) prev.push_back(strs[a.second]);
        else{
            if(strs[a.second]==prev.back())prev.push_back(strs[a.second]);
            else{
                ans.push_back(prev);
                prev.clear();
                prev.push_back(strs[a.second]);
            }
        }
      }
      ans.push_back(prev);
    return ans;
}