class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> v;
       for(int i=0;i<nums.size();i++)
       { int k=abs(nums[i])-1;
          if(nums[k]>0) nums[k]=-1*nums[k];
       }
   
        for(int i=0;i<nums.size();i++)
            if(nums[i]>0)
                v.push_back(i+1);
        return v;
    }
};