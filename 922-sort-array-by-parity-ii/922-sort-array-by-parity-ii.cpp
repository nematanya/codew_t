class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
      
        for(int i=0,j=1;i<nums.size();i+=2,j+=2)
        {
        while( i<nums.size() and nums[i]%2==0 ) i+=2;
        while( j<nums.size() and nums[j]%2!=0 ) j+=2;
       if(i<nums.size()) swap(nums[i],nums[j]);}
        return nums;
        // vector<int> ans(nums.size());
        // int i=0,j=1;
        // for(auto it:nums)
        // {
        //     if(it%2==0)
        //     {       ans[i]=it;
        //   i+=2;
        //     }
        //     else
        //     {
        //         ans[j]=it;
        //         j+=2;
        //     }
        // }
        // return ans;
        
    }
};