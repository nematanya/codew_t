class Solution {
public:
    string convert(string s, int n) {
        if(n==1) return s;
        vector<string> v(n,"");
        int j=0,w=1;
        for(int i=0;i<s.length();i++)
        {      v[j]+=s[i];
            if(j==0)w=1;
            else if(j==n-1)w=-1;
         j+=w;
        }
        string ans="";
        for(auto it: v)
            ans+=it;
        return ans;
    }
};