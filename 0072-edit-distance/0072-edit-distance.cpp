class Solution {
public:
    // int sol(int i,int j,string s,string t, vector<vector<int>>&dp)
    // {
    //     if(i<0) return j+1;
    //     if(j<0) return i+1;if(dp[i][j]!=-1) return dp[i][j];
    //     if(s[i]==t[j]) return dp[i][j]= sol(i-1,j-1,s,t,dp);
    //     else
    //         return dp[i][j]=1+min(sol(i,j-1,s,t,dp),min(sol(i-1,j,s,t,dp),sol(i-1,j-1,s,t,dp)));
    // }
    int minDistance(string s, string t) {
        int n=s.size(),m=t.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<=m;i++)
            dp[0][i]=i;
for(int i=1;i<=n;i++)
    dp[i][0]=i;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
                  if(s[i-1]==t[j-1])  dp[i][j]= dp[i-1][j-1];
        else
            dp[i][j]=1+min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));
        }
       return dp[n][m];
        
    }
};