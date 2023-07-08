class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int>ans;
        int n=nums.size();
        vector<int>temp(n);
        for(int i=0;i<n;i++)
        {
        temp[i]=target-nums[i];
        }
        map<int,int>mp;
           for(int i=0;i<n;i++)
           {
               mp[nums[i]]=i;
           }
        for(int i=0;i<n;i++)
        {
            if(mp.find(temp[i])!=mp.end() and mp[temp[i]]!=i)
            {
                ans.push_back(i);
                ans.push_back(mp[temp[i]]);
                return ans;
            }
            }
    return ans;
    }
};