#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    TreeNode* prev = NULL;
    int minDiff = INT_MAX;

    void inorder(TreeNode* node) {
        if (!node) return;
        inorder(node->left);
        if (prev) minDiff = min(minDiff, node->val - prev->val);
        prev = node;
        inorder(node->right);
    }

    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        return minDiff;
    }
};