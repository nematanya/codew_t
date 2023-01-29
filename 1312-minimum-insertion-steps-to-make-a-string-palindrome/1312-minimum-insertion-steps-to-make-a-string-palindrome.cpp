class Solution {
public:
       int lp(string s) {
        string s1=s;
        string s2=s;
        reverse(s2.begin(),s2.end());
        int n=s.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=0;
            dp[0][i]=0;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(s1[i-1]==s2[j-1])
                dp[i][j]=1+dp[i-1][j-1];
                else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
 return dp[n][n];
    }
    int minInsertions(string s) {
       string t=s;
        reverse(t.begin(),t.end());
        if(s==t)return 0;
        int l=s.size();
        return l-lp(s);
    }
};