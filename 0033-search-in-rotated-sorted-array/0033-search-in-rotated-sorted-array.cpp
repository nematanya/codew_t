class Solution {
public:
    int finpiv(vector<int>& nums, int target)
    {
        int s=0, e=nums.size()-1;
        int mid;
        while(s<e)
        {
            mid=(e-s)/2+s;
            if(mid<=nums.size()-1 and nums[mid]>nums[mid+1]) return mid+1;
            if(nums[mid]>=nums[s])
                s=mid+1;
            else
                e=mid;
        }
        
        return s;
    }
    int bsearch(int s,int e,int target,vector<int>&nums)
    {
        int left=s,right=e;
        int mid;
        while(left<=right)
        {   mid=(right-left)/2+left;
            if(target==nums[mid])
                return mid;
         else
             if(target>nums[mid])
             left=mid+1;
         else
                 right=mid-1;
                 
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        if(nums.size()==1 and nums[0]!=target) return -1;
        if(nums.size()==1 and nums[0]==target)  return 0;
        int s=0,e=nums.size()-1;
       int pivot=finpiv(nums,target);
        if(pivot==nums.size()) return bsearch(0,e,target,nums);
        if(nums[pivot]<=target and target<=nums[e])
            return bsearch(pivot,e, target,nums);
        else
           return bsearch(s,pivot-1,target,nums);
        
    }
};