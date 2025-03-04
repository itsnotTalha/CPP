#include<bits/stdc++.h>
using namespace std;
int sol(vector<int>&nums,int target, int l,int h){
    while(l<h){
        int mid = (l+h)/2;
        if(target==nums[mid]) return mid; 
        else if(target < nums[mid]) h = mid-1;
        else l = mid+1;
    }
    nums.push_back(target);
    sort(nums.begin(),nums.end());
    return sol(nums,target,l,h+1);
}
int main(){
    vector<int>nums={1,3,5,6};
    int target=7;
    int l = 0, h=nums.size()-1;
    int res = sol(nums,target,l,h);
    cout<<res<<" ";
    return 0;
}