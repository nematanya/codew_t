class Solution {
public:
    // int sol(int i,vector<int>& prices,bool buy,vector<vector<int>>& dp)
    // {
    //     if(i==prices.size()) return 0;
    //     int profit;
    //     if(dp[i][buy]!=-1) return dp[i][buy];
    //     if(buy) 
    //          profit=max(sol(i+1,prices,0,dp)-prices[i],sol(i+1,prices,1,dp));
    //     else
    //          profit=max(sol(i+1,prices,1,dp)+prices[i],sol(i+1,prices,0,dp));
    //     return dp[i][buy]=profit;
    // }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
       vector<vector<int>> dp(n+1,vector<int>(2));
        dp[n][0]=dp[n][1]=0;
        for(int i=n-1;i>=0;i--)
        {
            for(int buy=0;buy<=1;buy++){
         int profit;
        if(buy) 
             profit=max(dp[i+1][0]-prices[i],dp[i+1][1]);
        else
             profit=max(dp[i+1][1]+prices[i],dp[i+1][0]);
                dp[i][buy]=profit;
        }
        }
        return dp[0][1];
    }
};