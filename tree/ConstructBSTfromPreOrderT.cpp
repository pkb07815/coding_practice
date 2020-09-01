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
    TreeNode* BuildBST(TreeNode* &root, int x) {
        if(!root)
        {
            root= new TreeNode(x);
            return root;
        }
        
        if(x > root->val)
            root->right=BuildBST(root->right,x);
        else
            root->left=BuildBST(root->left,x);
        
        return root;
            
        
        
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
      TreeNode* root=NULL;
        
        
        for(auto x: preorder)
        {
            
            BuildBST(root,x);
        }
        return root;
        
    }
};
