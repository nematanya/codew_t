class Solution {
public:
    int sol(int i,vector<int>& prices,int buy,int cap,vector<vector<vector<int>>> &dp)
    { if(cap==0) return 0;
        if(i==prices.size()) return 0;
     if(dp[i][buy][cap]!=-1) return dp[i][buy][cap];
     if(buy)
         return dp[i][buy][cap]=max(-prices[i]+sol(i+1,prices,0,cap,dp),0+sol(i+1,prices,1,cap,dp));
     else
         return dp[i][buy][cap]=max(prices[i]+sol(i+1,prices,1,cap-1,dp),0+sol(i+1,prices,0,cap,dp));
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<vector<int>>> dp(prices.size(),vector<vector<int>>(2,vector<int>(3,-1)));
     return sol(0,prices,1,2,dp);   
    }
};