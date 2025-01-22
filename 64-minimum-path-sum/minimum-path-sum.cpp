class Solution {
public:
    int sol(int i,int j,int m,int n,vector<vector<int>>&grid,vector<vector<int>>&db)
    {
        if(i>=m || j>=n) return INT_MAX;
        if(i==m-1 && j==n-1) return db[i][j]=grid[i][j];
        if(db[i][j]!=-1)
           return db[i][j];
        else
        {
            return db[i][j]=grid[i][j]+min(sol(i+1,j,m,n,grid,db),sol(i,j+1,m,n,grid,db));
        }

    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>db(m,vector<int>(n,-1));
        return sol(0,0,m,n,grid,db);
        
    }
};