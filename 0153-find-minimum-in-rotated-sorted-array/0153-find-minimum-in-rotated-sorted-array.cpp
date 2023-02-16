class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int start=0,end=nums.size()-1;
        int mid;
        while(start<end)
        {
            mid=(end+start)/2;
            if(nums[start]<nums[end])
                return nums[start];
            if(nums[mid]>=nums[start])
                start=mid+1;
            else
                end=mid;
        }
        return nums[start];
    }
};