#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&nums,int target,int up,int low){
    while(up>=low){
        int  mid = (up+low)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]<target){
            return solve(nums,target,up,mid+1);
        }else if(nums[mid]>target){
            return solve(nums,target,mid-1,low);
        }
    }
    return -1;
}
int main(){
    vector<int>nums={-1,0,3,5,9,12};
    int target = 9;
    int res = solve(nums,target,nums.size()-1,0);
    cout<<res;
    return 0;
}