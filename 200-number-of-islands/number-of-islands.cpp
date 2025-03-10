
    class Solution {
public:
    vector<int>dx{0,0,1,-1};
    vector<int>dy{1,-1,0,0};
    void solve(int i,int j,int n,int m,vector<vector<char>>& v) {
        if(i<0 || j<0 || i>=n || j>=m || v[i][j]=='0' || v[i][j]=='2')
            return;
        v[i][j]='2';
        for(int k=0;k<4;k++) {
            solve(i+dx[k],j+dy[k],n,m,v);
        }
    }
    int numIslands(vector<vector<char>>& v) {
        int n=v.size();
        int m=v[0].size();
        int ans=0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(v[i][j]=='1') {
                    solve(i,j,n,m,v);
                    ans++;
                }
            }
        }
        return ans;
    }

};