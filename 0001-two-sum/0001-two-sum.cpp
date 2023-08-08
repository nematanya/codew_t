class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans;
      vector<int>temp(n);
        unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[target-nums[i]]=i;
    }
          for(int i=0;i<n;i++)
    {
        if(mp.find(nums[i])!=mp.end() and mp[nums[i]]!=i )
        {   ans.push_back(i);
         ans.push_back(mp[nums[i]]);
         break;
          }
    }
        return ans;
    }
};