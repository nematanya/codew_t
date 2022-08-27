class Solution {
public:
    // int sol(int i,vector<int> &v,vector<int> &dp)
    // { if(i==0) return v[i];
    //  if(i<0) return 0;
    //  if(dp[i]!=-1)   return dp[i];
    //  int pick=v[i]+sol(i-2,v,dp);
    //   int notpick=sol(i-1,v,dp);
    //  return dp[i]= max(pick,notpick);}
    
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        // vector<int> dp(n,-1);
        int prev=nums[0];
       int prev2=0;
    
        for(int i=1;i<n;i++)
        {
            // int pick=nums[i];
            // if(i>1) pick+=dp[i-2];
            // int non=dp[i-1];
            // dp[i]=max(pick,non);
            int pick=nums[i];
            if(i>1) pick+=prev2;
            int non=prev;
            int curr=max(pick,non);
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
};