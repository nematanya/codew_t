class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> ans(nums.size());
        int i=0,j=1;
        for(auto it:nums)
        {
            if(it%2==0)
            {       ans[i]=it;
          i+=2;
            }
            else
            {
                ans[j]=it;
                j+=2;
            }
        }
        return ans;
        
    }
};