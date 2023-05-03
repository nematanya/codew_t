class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        vector<vector<int>> ans;
        unordered_map<int,int>mp2;
        vector<int>temp2;
        for(auto it: nums2)
        {
            mp2[it]++;
        }
        for(auto it:nums1)
        {
            if(mp2.find(it)==mp2.end())
            {  mp2[it]++;
                temp2.push_back(it);}
        }
        ans.push_back(temp2);
        unordered_map<int,int>mp;
        vector<int>temp;
        for(auto it: nums1)
        {
            mp[it]++;
        }
        for(auto it:nums2)
        {  
            if(mp.find(it)==mp.end())
            {temp.push_back(it);mp[it]++;}
        }
        ans.push_back(temp);
 
        return ans;
    }
};