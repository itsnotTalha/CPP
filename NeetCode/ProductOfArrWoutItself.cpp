#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            int n = nums.size();
            vector<int> pref(n,1),posf(n,1);
            for (int i = 1; i < n; i++) {
                pref[i] = pref[i - 1] * nums[i - 1];
            }
            for (int i = n-2; i > -1; i--) {
                posf[i] = posf[i + 1] * nums[i + 1];
            }
            vector<int>ans(nums.size());
            for (int i = 0; i < n; i++) {
                ans[i] = pref[i] * posf[i];
            }
            return ans;
        }
    };
    