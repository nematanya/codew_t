class Solution {
public:
    int sol(vector<int>& sat,int t,int ind,vector<vector<int>>&dp)
    { int n=sat.size();
        if(ind>=n) return 0;
     if(dp[t][ind]!=-1) return dp[t][ind];
        int pick=t*sat[ind]+sol(sat,t+1,ind+1,dp);
        int notpick=sol(sat,t,ind+1,dp);
        return dp[t][ind]=max(pick,notpick);
    }
    int maxSatisfaction(vector<int>& sat) {
        int n=sat.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        sort(sat.begin(),sat.end());
        int t=1;
        return sol(sat,t,0,dp);
    }
};
