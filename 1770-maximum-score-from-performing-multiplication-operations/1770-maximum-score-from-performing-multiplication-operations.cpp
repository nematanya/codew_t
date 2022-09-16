class Solution {
public:
    int sol(vector<int>& nums, vector<int>& mul,int i,int l,int r,vector<vector<int>>& dp)

    {
        if( i==mul.size()) return 0;
        if(dp[l][i]!=-1e9) return dp[l][i];
        int start=nums[l]*mul[i]+sol(nums,mul,i+1,l+1,r,dp);
        int end=nums[r]*mul[i]+sol(nums,mul,i+1,l,r-1,dp);
        return dp[l][i]=max(start,end);
        
    }
    int maximumScore(vector<int>& nums, vector<int>& mul) {
        int c=mul.size();
        int n=nums.size();
        vector<vector<int>> dp(c,vector<int>(c,-1e+9));
        return sol(nums,mul,0,0,n-1,dp);
    }
};