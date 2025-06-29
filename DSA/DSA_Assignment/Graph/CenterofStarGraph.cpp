#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<int> e1 = edges[0];
        vector<int> e2 = edges[1];

        if (e1[0] == e2[0] || e1[0] == e2[1]) {
            return e1[0];
        } else {
            return e1[1];
        }
    }
};