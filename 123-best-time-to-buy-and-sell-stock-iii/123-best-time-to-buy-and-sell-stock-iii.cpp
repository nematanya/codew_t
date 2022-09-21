class Solution {
public:
    int sol(int i,vector<int>& prices, int t,vector<vector<int>>&dp)
    {
        if(i==prices.size()) return 0;
        if(t==4) return 0;
        if(dp[i][t]!=-1)return dp[i][t];
        if(t&1)
            return dp[i][t]=max(prices[i]+sol(i+1,prices,t+1,dp),sol(i+1,prices,t,dp));
        else
            return dp[i][t]=max(-prices[i]+sol(i+1,prices,t+1,dp),sol(i+1,prices,t,dp));
        
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
    vector<vector<int>>dp(n+1,vector<int>(5,-1));
        return sol(0,prices,0,dp);
    }
};