class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int count=0;
        int ans=0;
     for(auto it:nums)
     {  if(s.find(it-1)!=s.end()) continue;
         while(s.find(it)!=s.end())
         {
             it++;
             count++;
         }
      ans=max(ans,count);
      count=0;
     }
        return ans;
    }
};