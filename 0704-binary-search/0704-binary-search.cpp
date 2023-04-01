class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size(),mid;
        int ans=-1;
        while(s<e)
        {
    mid=(e-s)/2+s;
         if(nums[mid]==target)
             ans=mid;
            if(nums[mid]>target)e=mid;
            else 
                s=mid+1;
        }
        return ans;
    }
};