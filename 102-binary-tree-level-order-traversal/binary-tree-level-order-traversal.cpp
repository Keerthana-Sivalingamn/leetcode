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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==NULL) 
          return res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int count=q.size();
            vector<int>v;
            while(count)
            {
            TreeNode * current=q.front();
            q.pop();
            v.push_back(current->val);
            if(current->left)
              q.push(current->left);
            if(current->right)
              q.push(current->right);
              --count;
            }
            res.push_back(v);
        }
        return res;
    }
};