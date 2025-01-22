class Solution {
public:
    int sol(int i,int j,int m,int n,vector<vector<int>>&triangle,vector<vector<int>>&db)
    {
        if(i>=(m-1)) return triangle[i][j];
        if(db[i][j]!=-1) return db[i][j];
        else
        {
            return db[i][j]=triangle[i][j]+min(sol(i+1,j,m,n,triangle,db),sol(i+1,j+1,m,n,triangle,db));
        }
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        int n=triangle[0].size();
        vector<vector<int>>db(m,vector<int>(m,-1));
        return sol(0,0,m,n,triangle,db);
        
    }
};