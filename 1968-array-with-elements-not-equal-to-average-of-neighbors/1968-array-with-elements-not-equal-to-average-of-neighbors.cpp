class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int j=0,k=nums.size()-1;
        vector<int>ans(k+1);
        for(int i=0;i<nums.size();i++)
        {
            if((i&1))
            {
             ans[i]=nums[k];
                k--;
            }
            else
            {
                ans[i]=nums[j];
                j++;
            }
        }
        return ans;
    }
};