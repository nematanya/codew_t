class Solution {
public:
    int sol(int i,unordered_map<int,int>&mp,vector<int>& nums, int k)
    {
        if(i==nums.size()) return 1;
    int take=0;
        if(mp[nums[i]-k]==0 and mp[nums[i]+k]==0)
        {
            mp[nums[i]]++;
            take=sol(i+1,mp,nums,k);
            mp[nums[i]]--;
        }
        int nottake=sol(i+1,mp,nums,k);
        return take+nottake;
    }
    int beautifulSubsets(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        return sol(0,mp,nums,k)-1;
    }
};