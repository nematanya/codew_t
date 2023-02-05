class Solution {
public:
    bool check(vector<int>v,vector<int>t)
    {
        for(int i=0;i<26;i++)
        {
            if(v[i]!=t[i]) return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int n= p.size();
        map<char,int>mp1;
        vector<int>v(26,0);
        for(int i=0;i<n;i++)
            v[p[i]-'a']++;
        int i=0,j=0;
        vector<int>ans;
                       vector<int>v2(26,0);
        while(j<s.size())
        {  v2[s[j]-'a']++;
         
           if(j-i+1==n){
                 if(check(v,v2)) ans.push_back(i);
             v2[s[i]-'a']--;
            i++;
               j++;
           }
         else if(j-i+1<n)
         {
             j++;
         }
            else
            {
                v2[s[i]-'a']--;
            i++;  
            }
            
        }
        return ans;
    }
};