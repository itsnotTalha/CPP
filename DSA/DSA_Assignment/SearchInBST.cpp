#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (!root) 
            return NULL;

        if (root->val == val) 
            return root;
            
        if (val < root->val) 
        return searchBST(root->left, val);
        else
        return searchBST(root->right, val);
    }
};