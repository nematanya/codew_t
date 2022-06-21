class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int> m;
        for(auto it:nums)
            m[it]++;
        int maxi=*max_element (nums.begin(), nums.end());
        for(int i=1;i<=maxi;i++)
        {
            auto t=m.find(i);
            if(t==m.end()) return i;
        }
        if(maxi<0) return 1;
        else
        return maxi+1;
    }
};