#include<bits/stdc++.h>
using namespace std;
#define for0(i,n) for(int i=0;i<n;i++)
#define p pair<int,int>
#define vi vector<p>
int solve(vector<int>&nums,int target,int low,int up){
    while(up>=low){
        int mid = (low+up)/2;
        if(target==mid) return mid;
        else if(nums[mid]>target) return solve(nums,target,low,mid-1);
        else return solve(nums, target,mid+1,up);
    }
    return -1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int>nums={4,5,0,8,7,1,2};
    vector<pair<int,int>>vp(nums.size());
    for(int i=0;i<nums.size();i++){
        vp[i]={i,nums[i]};
    }
    for(int j=1;j<nums.size();j++){
        pair<int,int> tmp = vp[j];
        int i = j-1;
        while(i>=1&&vp[i].second>tmp.second){
            vp[i+1]=vp[i];
            i--;
        }
        vp[i+1]=tmp;
    }
    //sort(nums.begin(),nums.end());
    int low=0,up=nums.size()-1;
    int target = 0;
    int ans = solve(nums,target,low,up);
    for(int i=0;i<nums.size();i++){
        if(ans==vp[i].first){
            cout<<i;
            break;
        }
    }
    return 0;
}