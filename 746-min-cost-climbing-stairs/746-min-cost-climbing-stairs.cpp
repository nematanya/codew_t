class Solution {
public:
    // int sol(int i,vector<int>& cost,vector<int>& dp){
    //     if(i<0) return 0;
    //     if(i==1 or i==1) return dp[i]=cost[i];
    //     if(dp[i]!=-1) return dp[i];
    //     int two=INT_MAX;
    //     int one=INT_MAX;
    //    two=cost[i]+sol(i-2,cost,dp);
    //      one=cost[i]+sol(i-1,cost,dp);
    //     return dp[i]=min(one,two);
    // }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n,-1);
        // return min(sol(n-1,cost,dp),sol(n-2,cost,dp));
        for(int i=0;i<n;i++)
        {
            if(i<2)
                dp[i]=cost[i];
           else
           {
               dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
           }
        }
        return min(dp[n-1],dp[n-2]);
        
    }
};