#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int t;
    vector<char> color;
    vector<int> discover;
    vector<int> finish;
    void DFS_visit(int u, vector<vector<int>>& isConnected) {
        t++;
        color[u] = 'g'; // green = discovered
        discover[u] = t;

        for (int v = 0; v < isConnected.size(); ++v) {
            if (isConnected[u][v] && color[v] == 'w') {
                DFS_visit(v, isConnected);
            }
        }
        t++;
        finish[u] = t;
        color[u] = 'y';
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        t = 0;
        color.assign(n, 'w'); // white = unvisited
        discover.assign(n, 0);
        finish.assign(n, 0);
        int provinceCount = 0;
        for (int i = 0; i < n; ++i) {
            if (color[i] == 'w') {
                DFS_visit(i, isConnected);
                provinceCount++;
            }
        }
        return provinceCount;
    }
};
