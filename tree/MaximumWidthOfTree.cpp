**
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
    int widthOfBinaryTree(TreeNode* root) {
        
        if(root==NULL) return 0;
        queue<pair<TreeNode*,unsigned>>q;
        q.push({root,1});
        unsigned ans=1;
        while(!q.empty())
        {
            int count=q.size();
            ans=max(ans,q.back().second-q.front().second+1);
            while(count--)
            {
                TreeNode* temp=q.front().first;
                unsigned x=q.front().second;
                if(temp->left) q.push({temp->left,2*x});
                if(temp->right) q.push({temp->right,2*x+1});
                q.pop();
            }
        }
        return ans;
        
    }
};
