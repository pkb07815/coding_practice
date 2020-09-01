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

public:
    bool The_Same(TreeNode*Right , TreeNode*Left)
{
    if (!Right||!Left)
        return (Right==Left) ;
    else if (Right->val!=Left->val)
        return 0 ;
    return The_Same(Right->right , Left->left) && The_Same(Right->left , Left->right) ;
}
    
public:
    bool isSymmetric(TreeNode* root) {
 
    if (!root)
        return true ;
    return The_Same(root->right , root->left) ;
}
        
    
};
