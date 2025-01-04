class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        vector<vector<int>>res;   if(root == NULL) return res;
        queue<TreeNode*>q;    q.push(root); int flag = 1;     
        while(!q.empty())
        {
            vector<int>v;
            for(int count = q.size(); count; count--){
               TreeNode * temp = q.front();
                q.pop();
                v.push_back(temp -> val);
                if(temp -> left) q.push(temp -> left);
                if(temp -> right) q.push(temp -> right);
            }
            if(flag == 0) reverse(v.begin(), v.end());
            flag = !flag;
            res.push_back(v);
        }
        return res;
       
    }
};