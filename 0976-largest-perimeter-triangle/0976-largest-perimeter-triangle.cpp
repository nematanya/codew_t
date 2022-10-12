class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
        for(int i=n-3;i>=0;i--)
        {
            if(nums[i+2]<nums[i+1]+nums[i])
                ans=max(ans,nums[i+2]+nums[i+1]+nums[i]);
        }
        return ans;
       }
};