class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target<nums[0]) return 0;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        { 
            if(nums[i]==target) return i;
            else if(i != nums.size()-1 and nums[i+1]>target) 
            {ans=i+1;
             break;}
        }
        if(ans) return ans;
        else return nums.size();
    }
};