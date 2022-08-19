class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
            vector<int> v;
        
        for(int i=0;i<nums.size();i++)
        {
            int res=target-nums[i];
            if(mp.find(res)!=mp.end())
            { 
                v.push_back(mp[res]);
                v.push_back(i);
                return v;
            }
            mp[nums[i]]=i;
          
        }
        return v;    
    }
};