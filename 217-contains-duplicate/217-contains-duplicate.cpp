class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      map<int,int> m;
    for(auto i:nums)
        m[i]++;
        if(m.size()==nums.size()) return false;
        else return true;
    }
};