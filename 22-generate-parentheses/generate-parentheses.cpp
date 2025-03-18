class Solution {
public:
    void backtrack(vector<string>&v,int n,int oc,int cc,string s)
    {
        if(oc==n && cc==n)
        {
          v.push_back(s);
          return;
        }
        if(oc<n)
        {
        backtrack(v,n,oc+1,cc,s+"(");
        }
        if(cc<oc)
        {
        backtrack(v,n,oc,cc+1,s+")");
        }
         
    }
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        string s;
        backtrack(v,n,0,0,"");
        return v;
        
    }
};