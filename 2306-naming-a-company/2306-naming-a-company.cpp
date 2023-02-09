class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        vector<unordered_set<string>> s(26);
        for(auto it: ideas)
            s[it[0]-'a'].insert(it.substr(1));
        long long res=0;
        for(int i=0;i<26;i++)
        {
            for(int j=i+1;j<26;j++)
            {
                long long s1=0,s2=0;
                for(auto it:s[i])
                {
                    if(s[j].find(it)==s[j].end())
                        s1++;
                }
                for(auto it:s[j])
                   {
                    if(s[i].find(it)==s[i].end())
                        s2++;
                }
                res+=s1*s2*2;
            }
        }
        return res;
    }
};