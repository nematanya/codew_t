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
        vector<int>dp(nums.size(),10004);
        return sol(nums,0,dp);
    }
};