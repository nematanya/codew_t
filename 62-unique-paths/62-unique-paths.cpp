class Solution {
public:
    // // int sol(int i,int j, vector<vector<int>> &dp)
    // {
    //     if(i==0 and j==0) return 1;
    //     if(i<0 or j<0) return 0;
    //     if(dp[i][j]!=-1) return dp[i][j];
    //     int up=sol(i-1,j,dp);
    //     int left=sol(i,j-1,dp);
    //     return dp[i][j]=up+left;
    // }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            { if(i==0 and j==0 ) dp[0][0] =1;
               else{ int up=0,left=0;
                   if(i>0) up=dp[i-1][j];
                    if(j>0) left=dp[i][j-1];
                    dp[i][j]=left+up;
            }
            }
        }
         return dp[m-1][n-1];
    }
};