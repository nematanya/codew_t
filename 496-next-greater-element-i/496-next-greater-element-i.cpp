class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        unordered_map<int,int> mp;
        for(int i=nums2.size()-1;i>=0;i--)
        {
             while(!s.empty() && s.top()<nums2[i]){
          s.pop();
      }

      if(s.empty()){
          mp[nums2[i]]=-1;
      }
      
      else{
          mp[nums2[i]]=s.top();
      }
      
            s.push(nums2[i]);
        }
        vector<int> ans;
        for(auto it:nums1)
        {
            ans.push_back(mp[it]);
        }
        return ans;
    }
};