#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    TreeNode* prevNode = NULL; 
    int currCount = 0;            
    int maxCount = 0;              
    vector<int> modes;             

    void inorder(TreeNode* node) {
        if (node == NULL) return;

        inorder(node->left);

        if (prevNode != NULL && prevNode->val == node->val) {
            currCount++; 
        } else {
            currCount = 1; 
        }

        if (currCount > maxCount) {
            maxCount = currCount;
            modes.clear(); 
            modes.push_back(node->val);
        } else if (currCount == maxCount) {
            modes.push_back(node->val);
        }

        prevNode = node;

        inorder(node->right);
    }

    vector<int> findMode(TreeNode* root) {
        inorder(root);
        return modes;
    }
};
