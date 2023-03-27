class Solution {
public:
    // int sol(int i,int j,vector<vector<int>>& grid,vector<vector<int>>&dp)
    // {  
    //     if(i==0 and j==0) return dp[i][j]=grid[i][j];
    //     if(i<0 or j<0 ) return 1e9;
    //     if(dp[i][j]!=-1) return dp[i][j];
    //     int up=grid[i][j]+sol(i-1,j,grid,dp);
    //     int left=grid[i][j]+sol(i,j-1,grid,dp);
    //     return dp[i][j]= min(left,up);
    // }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                if(i==0 and j==0) dp[i][j]=grid[i][j];
                  else{ int up=INT_MAX;
                   if(i>0)up=grid[i][j]+dp[i-1][j];
        int left=INT_MAX;
                if(j>0)left=grid[i][j]+dp[i][j-1];
                dp[i][j]=min(up,left);
                      }
            }
        return dp[n-1][m-1];
    }
};