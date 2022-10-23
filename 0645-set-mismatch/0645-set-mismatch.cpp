class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int> mp;
        for(auto it:nums)
            mp[it]++;
        vector<int> ans;
        for(int i=1;i<=nums.size();i++)
        { if(mp.find(i)==mp.end()) continue;
          if(mp[i]==2) ans.push_back(i);
        }
            for(int i=1;i<=nums.size();i++)
         if(mp.find(i)==mp.end()) ans.push_back(i);
        
        return ans;
    }
};