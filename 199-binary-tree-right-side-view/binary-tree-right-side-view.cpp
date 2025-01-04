class Solution {
public:
    vector<int>rightSideView(TreeNode* root) {
        vector<int>res;
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
            res.push_back(v[v.size()-1]);
        }
        return res;
    }
};