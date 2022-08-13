class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int n = s.length(), m = words.size(), wl = words[0].size();
        
        int l = wl*m;
        
        if(n<l) return {};
        
        vector<int>ans;
        int start = 0;
        unordered_map<string,int> mp,tmp;
        
        
        for(string x : words)
            mp[x]++;
        
        for(int i=0;i<=n - l;i++)
        {
            tmp = mp;
            start = i;
            int j = i;
            int wcount = 0;
            
            while(j<=start+l-wl)
            {
                string sub = s.substr(j,wl);
                
                if(tmp[sub]>0)
                {
                    tmp[sub]--;
                    wcount++;
           
                    if(wcount == m)
                    {ans.push_back(start);
                    break;
                    }
                    j= j+wl;
                }
                else break;
            }
        }
        return ans;
    }
};