class Solution {
public:
    // int sol(int i,vector<int>& prices,int buy,int cap,vector<vector<vector<int>>> &dp)
    // { if(cap==0) return 0;
    //     if(i==prices.size()) return 0;
    //  if(dp[i][buy][cap]!=-1) return dp[i][buy][cap];
    //  if(buy)
    //      return dp[i][buy][cap]=max(-prices[i]+sol(i+1,prices,0,cap,dp),0+sol(i+1,prices,1,cap,dp));
    //  else
    //      return dp[i][buy][cap]=max(prices[i]+sol(i+1,prices,1,cap-1,dp),0+sol(i+1,prices,0,cap,dp));
    // }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
        // for(int i=0;i<n;i++)
        // {
        //     for(int b=0;b<2;b++)
        //         dp[i][b][0]=0;
        // }
        // for(int b=0;b<2;b++)
        // {
        //     for(int c=0;b<3;c++)
        //         dp[n][b][c]=0;
        // }
        for(int i=n-1;i>=0;i--)
        {
                for(int cap=1;cap<=2;cap++)
                { 
                    dp[i][1][cap]=max(-prices[i]+dp[i+1][0][cap],dp[i+1][1][cap]);
                
                    dp[i][0][cap]=max(prices[i]+dp[i+1][1][cap-1],dp[i+1][0][cap]);
                } 
        }
     return dp[0][1][2];
    }
};