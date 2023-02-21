class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int t=0;
        for(auto it:nums)
            t=t^it;
        return t;
    }
};