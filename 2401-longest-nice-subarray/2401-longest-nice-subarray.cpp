class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int i=0,j=0;
        int ans=0;
        int temp=0;
        while(j<nums.size())
        {
           int t=temp&nums[j];
            if(t==0)
            {
              ans=max(ans,j-i+1);
              temp|=nums[j];
                j++;
            }
            else
            {
                temp^=nums[i];
                i++;
            }
        }
        return ans;
    }
};