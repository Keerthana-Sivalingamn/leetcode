class Solution {
public:
    int sol(int i,int j,int m,int n,vector<vector<int>>&obstacleGrid,vector<vector<int>>&db)
    {
        if(i>=m || j>=n || obstacleGrid[i][j]==1) return 0;
        if(i==(m-1) && j==(n-1)) return 1;
        if(db[i][j]!=-1) return db[i][j];
        else
        {
            return db[i][j]=sol(i+1,j,m,n,obstacleGrid,db)+sol(i,j+1,m,n,obstacleGrid,db);
        }
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>db(m,vector<int>(n,-1));
        return sol(0,0,m,n,obstacleGrid,db);
        
    }
};