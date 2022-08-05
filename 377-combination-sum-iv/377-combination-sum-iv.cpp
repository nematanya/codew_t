class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned int> dp(target+1);dp[0]=1;
        for(int curr=1;curr<=target;curr++){
            for(auto i : nums){
                if(i<=curr){
                    dp[curr]+=dp[curr-i];
                }
            }
        }
        return dp[target];
    }
};