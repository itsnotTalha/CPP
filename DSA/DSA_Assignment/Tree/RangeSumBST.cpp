#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if (!root) 
            return 0;
        int sum = 0;
        if (root->val > low) 
            sum += rangeSumBST(root->left, low, high);

        if (root->val >= low && root->val <= high) 
            sum += root->val;
            
        if (root->val < high) 
            sum += rangeSumBST(root->right, low, high);
        
        return sum;
    }
};