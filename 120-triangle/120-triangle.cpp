class Solution {
public:
    
    int sol(int i,int j,vector<vector<int>>& triangle,vector<vector<int>>& dp,int n)
    {     if(dp[i][j]!=-1) return dp[i][j];
        if(i==n-1) return triangle[i][j];
    
        int down=triangle[i][j]+sol(i+1,j,triangle,dp,n);
        int dia=triangle[i][j]+sol(i+1,j+1,triangle,dp,n);
        return dp[i][j]=min(down,dia);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int r=triangle.size();
        int c=triangle[0].size();
        vector<vector<int>> dp(r,vector<int>(r,-1));
      return sol(0,0,triangle,dp,r);
    }
};