class Solution {
public:
    // int sol(int i,int j,vector<vector<int>>& matrix,int n,vector<vector<int>>& dp)
    // {
    //     if(j<0 or j>=n) return 1e9;
    //      if(i==0) return dp[i][j]= matrix[i][j];
    //     if(dp[i][j]!=-1)return dp[i][j];
    //     int up=matrix[i][j]+sol(i-1,j,matrix,n,dp);
    //     int rd=matrix[i][j]+sol(i-1,j+1,matrix,n,dp);
    //     int ld=matrix[i][j]+sol(i-1,j-1,matrix,n,dp);
    //     return dp[i][j]=min(up,min(ld,rd));
    // }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        vector<vector<int>> dp(r,vector<int>(c,-1));
        for(int j=0;j<c;j++)
            dp[0][j]=matrix[0][j];
        
        int ans=1e9;
        for(int i=1;i<r;i++){
       for(int j=0;j<c;j++){
           int up=matrix[i][j]+dp[i-1][j];
           int rd=1e9;
        if(j<c-1) rd=matrix[i][j]+dp[i-1][j+1];
           int ld=1e9;
        if(j>0 ) ld=matrix[i][j]+dp[i-1][j-1];
         dp[i][j]=min(up,min(ld,rd));
       }
        }
        for(int k=0;k<c;k++)
        ans=min(ans,dp[r-1][k]);
        return ans;
    }
};