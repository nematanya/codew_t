class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long ans=0;
        long long n=nums.size();
       unordered_map<long long,int> mp;
        for(int i=0;i<n;i++)
            mp[i-nums[i]]++;
 long long total=(long long)(n*(n-1)/2);
        for(auto i:mp)
        {
            ans+=(long long)(i.second)*(i.second-1)/2;
        }
        return total-ans;
    }
};