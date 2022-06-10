class Solution {
public:
    int lengthOfLongestSubstring(string s) {
 
        unordered_map<char,int> m;
        int i=0,j=0,res=0;
        while(j<s.length())
        {
            m[s[j]]++;
          if(m.size()==j-i+1) 
          {  res=max(res,j-i+1);
              j++;
          }
            else if(m.size()<j-i+1)
            {
                while(m.size()<j-i+1)
                {
                    m[s[i]]--;
                    if(m[s[i]]==0)
                    m.erase(s[i]);
                    i++;
                }
                j++;
            }
        }
        return res;
    }
   
};