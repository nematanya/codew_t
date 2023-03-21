class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0;
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++)
        { if(nums[i]!=0)
        {
        c=0;
        }
         else c++;
      ans+=c;
        }
        return ans;
    }
};