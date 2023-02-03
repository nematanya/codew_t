class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,1);
        vector<int>cnt(n,1);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {  
                if(nums[j]<nums[i] and dp[j]+1>dp[i])
                {
                dp[i]=max(dp[i],1+dp[j]);
                        cnt[i]=cnt[j];
                }
                else if(nums[j]<nums[i] and dp[j]+1==dp[i])
                {
                    cnt[i]+=cnt[j];
                }
            }
        }
        int t=*max_element(dp.begin(),dp.end());
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(dp[i]==t) ans+=cnt[i];
        }
        return ans;
    }
};