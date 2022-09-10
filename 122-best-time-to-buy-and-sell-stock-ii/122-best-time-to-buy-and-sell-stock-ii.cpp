class Solution {
public:
    int sol(int i,vector<int>& prices,bool buy,vector<vector<int>>& dp)
    {
        if(i==prices.size()) return 0;
        int profit;
        if(dp[i][buy]!=-1) return dp[i][buy];
        if(buy) 
             profit=max(sol(i+1,prices,0,dp)-prices[i],sol(i+1,prices,1,dp));
        else
             profit=max(sol(i+1,prices,1,dp)+prices[i],sol(i+1,prices,0,dp));
        return dp[i][buy]=profit;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
       vector<vector<int>> dp(n,vector<int>(2,-1));
        return sol(0,prices,1,dp);
    }
};