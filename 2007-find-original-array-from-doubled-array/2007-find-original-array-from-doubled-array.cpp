class Solution {
public:
    vector<int> findOriginalArray(vector<int>& c) {
        map<int,int> mp;
        for(int i=0;i<=c.size()-1;i++)
            mp[c[i]]++;
        vector<int> res;
       sort(c.begin(),c.end());
        for(int i=0;i<=c.size()-1;i++)
        {   
          if(mp.find(2*c[i])!=mp.end() and mp[c[i]]!=0 and mp[2*c[i]]!=0)
          {
              mp[c[i]]--;
              mp[2*c[i]]--;
    
              res.push_back(c[i]);
          }
            }
        
   for(auto it:mp)
   {         if(it.second!=0)
            return vector<int>();
   }    
        return res;
    }
};