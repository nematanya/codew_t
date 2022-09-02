class Solution {
public:
    int sol(int i,int j,vector<vector<int>>& matrix,int n,vector<vector<int>>& dp)
    {
        if(j<0 or j>=n) return 1e9;
         if(i==0) return dp[i][j]= matrix[i][j];
        if(dp[i][j]!=-1)return dp[i][j];
        int up=matrix[i][j]+sol(i-1,j,matrix,n,dp);
        int rd=matrix[i][j]+sol(i-1,j+1,matrix,n,dp);
        int ld=matrix[i][j]+sol(i-1,j-1,matrix,n,dp);
        return dp[i][j]=min(up,min(ld,rd));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        vector<vector<int>> dp(r,vector<int>(c,-1));
        int ans=1e9;
       for(int k=0;k<c;k++)
          ans= min(ans,sol(r-1,k,matrix,c,dp));
        return ans;
    }
};