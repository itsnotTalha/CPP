#include<bits/stdc++.h>
using namespace std;
int main(){
    int k=2;
    vector<int>nums = {1,2,2,3,3,3};
    unordered_map<int,int>a;
    for(int x : nums){
        a[x]++;
    }
    vector<pair<int,int>> arr;
    for(auto& x : a){
        arr.push_back({x.second, x.first});
    }
    sort(arr.rbegin(), arr.rend());
    vector<int>ans;
    for(int i =0; i<k; i++){
        ans.push_back(arr[i].second);
    }
    return ans;
}