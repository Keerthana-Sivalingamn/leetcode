class Solution {
public:
    void backtrack(int ind,vector<vector<int>> & res,vector<int> &ans,int k,int n)
    {
        if(n<0) return;
        if(n==0 && ans.size()==k)
        {
            res.push_back(ans);
            return;
        }
        for(int i=ind;i<=9;i++)
        {
            if(i>n) break;
           ans.push_back(i);
           backtrack(i+1,res,ans,k,n-i);
           ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> ans;
        backtrack(1,res,ans,k,n);
        return res;
        
    }
};