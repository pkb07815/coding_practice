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
    vector<int> rightSideView(TreeNode* root) {
        
        queue<TreeNode *> que;
        
        vector<int> vct;
        
        if(!root) return vct;
        
        
        que.push(root);
        
        while(!que.empty())
        {
            
          // for right view take the back element of queue  
            vct.push_back(que.back()->val);
            
            int n=que.size();
            
            while(n--)
            {
                
            TreeNode *node=que.front();
            que.pop();
            
            
            if(node->left)
                que.push(node->left);
            
            if(node->right)
                que.push(node->right);
                
            }
            
           
            
        }
        
        return vct;
        
        
    }
};
