class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>>s;
        vector<vector<int>>ans;
        for(int i=0;i<n;i++)
        {
            int target=-nums[i];
            int j=i+1,k=n-1;
            while(j<k)
            {
                if((nums[j]+nums[k])==target)
                {
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if((nums[j]+nums[k])>target)
                    k--;
                else
                    j++;
            }
        }
        for(auto it:s)
            ans.push_back(it);
        return ans;
    }
};