class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      if(nums.size()<3)
    return nums.size();
    int c=2;
    for(int i=2;i<nums.size();i++){
    if(nums[c-2]!=nums[i]){
    nums[c]=nums[i];
    c++;
    }
     }
    return c;  
    }
};