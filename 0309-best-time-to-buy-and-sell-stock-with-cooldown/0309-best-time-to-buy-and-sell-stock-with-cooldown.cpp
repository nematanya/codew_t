class Solution {
public:
    int sol(int i,int t,vector<int> prices,vector<vector<int>>&dp)
    {
        if(i>=prices.size()) return 0;
        if(dp[i][t]!=-1) return dp[i][t];
        if(t)
        {
         return dp[i][t]=max(-prices[i]+sol(i+1,0,prices,dp),sol(i+1,1,prices,dp));
        }
        else
        {
        return dp[i][t]=max(+prices[i]+sol(i+2,1,prices,dp),sol(i+1,0,prices,dp));     
        }
            
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return sol(0,1,prices,dp);        
    }
};