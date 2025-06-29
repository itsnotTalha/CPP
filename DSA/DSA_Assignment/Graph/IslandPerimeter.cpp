#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size(), cols = grid[0].size();
        int ans = 0;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 1) {
                    ans += 4;
                    if (i > 0 and grid[i - 1][j] == 1) ans -= 2;
                    if (j > 0 and grid[i][j - 1] == 1) ans -= 2;
                }
            }
        }
        return ans;
    }
};