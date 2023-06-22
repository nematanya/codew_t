class Solution {
public:
    // int sol(int i,int t,vector<int> prices,vector<vector<int>>&dp,int fee)
//     {
//         if(i==prices.size()) return 0;
//         if(dp[i][t]!=-1) return dp[i][t];
//         if(t)
//         {
//          return dp[i][t]=max(-prices[i]-fee+sol(i+1,0,prices,dp,fee),sol(i+1,1,prices,dp,fee));
//         }
//         else
//         {
//         return dp[i][t]=max(+prices[i]+sol(i+1,1,prices,dp,fee),sol(i+1,0,prices,dp,fee));     
//         }
            
//     }
    int maxProfit(vector<int>& prices, int fee) {
         int n=prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2,0));
        for(int i=n-1;i>=0;i--)
        {
            for(int t=0;t<2;t++)
            {
         if(t)
          dp[i][t]=max(-prices[i]-fee+dp[i+1][0],dp[i+1][1]);
        else
         dp[i][t]=max(+prices[i]+dp[i+1][1],dp[i+1][0]);     
            }
        }
        return dp[0][1]; 
    }
};