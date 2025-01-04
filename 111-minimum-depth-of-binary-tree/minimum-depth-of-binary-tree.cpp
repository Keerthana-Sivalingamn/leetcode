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
    int minDepth(TreeNode* root) {
        if(root==NULL) 
          return 0;
        queue<TreeNode*>q;
        q.push(root);
        int level=0;
        while(!q.empty())
        {
            int count=q.size();
            while(count)
            {
            TreeNode * current=q.front();
            q.pop();
            if((current->left==NULL)&&(current->right==NULL))
              return level+1;
            if(current->left)
              q.push(current->left);
            if(current->right)
              q.push(current->right);
              --count;
            }
            level++;
        }
        return 0;
        
        
    }
};