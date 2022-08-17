class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s=0,e=nums.size()-2;
        int mid;
        while(s<=e)
        { mid=s+(e-s)/2;
            if(mid%2==0)
            {
                if(nums[mid+1]!=nums[mid])
                    e=mid-1;
                else 
                    s=mid+1;
            }
            else{
                if(nums[mid-1]!=nums[mid])
                    e=mid-1;
                else s=mid+1;
            }
        }
        return nums[s];
    }
};