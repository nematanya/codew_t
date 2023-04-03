class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsd) {
        int g=numsd[0];
        for(auto it:numsd)
            g=gcd(g,it);
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(g%nums[i]==0) return i;
        }
        return -1;
    }
};