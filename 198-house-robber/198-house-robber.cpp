class Solution {
public:
    int sol(int i,vector<int> &v,vector<int> &dp)
    { if(i==0) return v[i];
     if(i<0) return 0;
     if(dp[i]!=-1)   return dp[i];
     int pick=v[i]+sol(i-2,v,dp);
      int notpick=sol(i-1,v,dp);
     return dp[i]= max(pick,notpick);}
    
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> dp(n,-1);
        return sol(n-1,nums,dp);
    }
};