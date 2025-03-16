class Solution {
public:
    void backtrack(int ind,vector<int> &candidates,vector<vector<int>>&res,vector<int>&ans,int target)
    {
        if(target<0)
           return ;
        if(target==0)
        {
          res.push_back(ans);
          return;
        }
        for(int i=ind;i<candidates.size();i++)
        {
            ans.push_back(candidates[i]);
            backtrack(i,candidates,res,ans,target-candidates[i]);
            ans.pop_back();
        }
          
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> ans;
        backtrack(0,candidates,res,ans,target);
        return res;
        
    }
};