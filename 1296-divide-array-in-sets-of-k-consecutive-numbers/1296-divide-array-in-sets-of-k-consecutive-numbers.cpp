class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if(nums.size()%k!=0) return false;
        sort(nums.begin(),nums.end());
         unordered_map<int,int>mp;
        for(auto it:nums)
            mp[it]++;
 for(int i=0;i<nums.size();i++)
 {
     if(mp[nums[i]]<=0) continue;
     else 
         for(int j=nums[i];j<nums[i]+k;j++)
         {
             if(mp[j]<=0) return false;
             mp[j]--;
         }
 }
        return true;
        
    }
};