#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool findTarget(TreeNode* root, int target) {
        vector<int> values;
        inorderTraversal(root, values);

        int low = 0;
        int high = values.size() - 1;

        while (low < high) {
            int currentSum = values[low] + values[high];
            if (currentSum == target) {
                return true;
            } else if (currentSum < target) {
                low++;
            } else {
                high--;
            }
        }
        return false;
    }

private:
    void inorderTraversal(TreeNode* current, vector<int>& values) {
        if (current == NULL) return;

        inorderTraversal(current->left, values);
        values.push_back(current->val);
        inorderTraversal(current->right, values);
    }
};
