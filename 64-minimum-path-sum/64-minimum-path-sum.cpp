class Solution {
public:
    int sol(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& dp){
        if(i==0 and j==0 ) return grid[i][j] ;
       if(i<0 or j<0) return 1e9;
         if(dp[i][j]!=-1) return dp[i][j];
       int up=grid[i][j] + sol(i-1,j,grid,dp);
       int left=grid[i][j] + sol(i,j-1,grid,dp);
        return dp[i][j]= min(up,left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
vector<vector<int>>dp(r,vector<int>(c,-1));
        return sol(r-1,c-1,grid,dp);
        }
};