#include<bits/stdc++.h>
using namespace std;
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0;
        int m = accounts.size();
        for(int i=0;i<m;i++){
            int n = accounts[i].size();
            int mx=0;
            for(int j=0;j<n;j++){
                mx+=accounts[i][j];
            }
            if(mx>max) max = mx;
        }
        return max;
    }