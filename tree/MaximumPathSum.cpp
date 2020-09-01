/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    
    int max_sum = INT_MIN;
public:
    int maxPathSumHelper(TreeNode* root) {
        if(root == NULL) return 0;
        
        int leftVal = max(maxPathSumHelper(root->left), 0);
        int rightVal = max(maxPathSumHelper(root->right), 0);
        max_sum = max(max_sum, root->val + leftVal + rightVal);
        return root->val + max(leftVal, rightVal);
    }
public:
    int maxPathSum(TreeNode* root) {
        
    
        maxPathSumHelper(root);
        return max_sum;
    }
    
  
};
