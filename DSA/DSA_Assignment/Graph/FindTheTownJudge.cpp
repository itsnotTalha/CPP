#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> ind(n + 1, 0);
        vector<int> out(n + 1, 0);

        for (int i = 0; i < trust.size(); i++) {
            int a = trust[i][0];
            int b = trust[i][1];
            out[a]++; 
            ind[b]++; 
        }

        for (int i = 1; i <= n; i++) {
            if (ind[i] == n - 1 && out[i] == 0) {
                return i;
            }
        }

        return -1;
    }
};
