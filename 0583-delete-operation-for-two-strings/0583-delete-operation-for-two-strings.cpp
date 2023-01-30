class Solution {
public:
    int minDistance(string s1, string s2) {
        int n=s1.size(),m=s2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=0;i<=m;i++)
        dp[0][i]=0;
        for(int i=0;i<=n;i++)
        dp[i][0]=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                   if(s1[i-1]==s2[j-1])  dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        int t=dp[n][m];
        // string ans(t,'$');
        // int i=n,j=m;
        // int index=t-1;
        // while(i>0 and j>0)
        // {
        //  if(s1[i-1]==s2[j-1])
        //  {
        //      ans[index]=s1[i-1];
        //      i--;
        //      j--;
        //      index--;
        //  }
        //     else if(dp[i-1]>dp[j])
        //         i--;
        //     else 
        //     j--;
        // }
        return n+m-(2*t);
        
    }
};