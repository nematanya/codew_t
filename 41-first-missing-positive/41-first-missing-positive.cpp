class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
              for(auto &it:nums)
         if(it<=0) it=nums.size()+1;
        for(int i=0;i<nums.size();i++)
        { 
            int k=abs(nums[i])-1;
            if(k<0 or k>=nums.size()) continue;
            nums[k]=-1*(abs(nums[k]));
            
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
                return i+1;
        }
        return nums.size()+1 ;
    }
};