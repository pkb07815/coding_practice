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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> res;
        
        if(!root)
        return res;
        queue<TreeNode *> que;
        
        que.push(root);
        
        int i=0;
        
        int counter=0;
        while(!que.empty())
        {
            
            int n= que.size();
            vector<int> vct;
            
            while(n--)
            {
                
            
            TreeNode* temp= que.front();
            vct.push_back(temp->val);
            
            que.pop();
            
            if(temp->left)
                que.push(temp->left);
            
            if(temp->right)
                que.push(temp->right);
            
            
            }
            if(counter%2)
            {
              reverse(vct.begin(),vct.end());
              res.push_back(vct);
            }
            else
              res.push_back(vct);
                        
            vct.clear();
            counter++;
            
        }
            
  //  reverse(res.begin(),res.end());
            
     return res;
        
    }
};
