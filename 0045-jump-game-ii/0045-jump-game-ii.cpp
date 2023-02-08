class Solution {
public:
    int sol(vector<int>&nums,int i,vector<int>&dp)
    {
        if(i>=nums.size()-1) return 0;
        int ans=10004;
        if(dp[i]!=10004) return dp[i];
        for(int j=1;j<=nums[i];j++)
            ans= min(ans,1+sol(nums,i+j,dp));
        return dp[i]= ans;
    }
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(nums.size(),10004);
        dp[n-1]=0;
        for(int i=n-2;i>=0;i--)
        {
            for(int j=1;j<=nums[i];j++)
                dp[i]=min(dp[i],1+dp[min(n-1,i+j)]);
        }
        return dp[0];
    }
};