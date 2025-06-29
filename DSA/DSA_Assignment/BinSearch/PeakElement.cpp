#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<int>&nums){
    int l = 0, h = nums.size() - 1;
    while (l < h) {
        int mid = l + (h - l) / 2;
        
        if (nums[mid] > nums[mid + 1]) {
            h = mid;
        } else {
            l = mid + 1;
        }
    }
    
    return l;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> nums = {1};
    cout<<binarysearch(nums);
}