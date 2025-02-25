#include<bits/stdc++.h>
using namespace std;
  vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n + 1, 0); 
        int i =0;
        for(int num : nums){
            freq[num]++;
        }
        vector<int>ans;
        for(int i=1;i<=n;i++){
            if(freq[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }