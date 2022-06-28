class Solution {
public:
    void set(int i,vector<vector<int>> &ans,vector<int> &nums,vector <int> &t)
    {
        if(i==nums.size()) {ans.push_back(t);
                           return;}
        t.push_back(nums[i]);
        set(i+1,ans,nums,t);
        t.pop_back();
        set(i+1,ans,nums,t);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
      vector<int> t;
        vector<vector<int>> ans;
      set(0,ans,nums,t);
        return  ans;
          
    }
};