class Solution {
public:
    bool canConstruct(string rn, string m) {
       map<char,int> mp;
        for(int i=0;i<m.size();i++)
            mp[m[i]]++;
        for(int i=0;i<rn.size();i++)
        {if(mp.find(rn[i])==mp.end() or mp[rn[i]]==0)
          return false;
         mp[rn[i]]--;
         }
        return true;
    }
};