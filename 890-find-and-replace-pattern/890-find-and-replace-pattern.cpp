class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        for(auto word:words)
        {
            unordered_map<char,char>mp1,mp2;
            bool flag=true;
            for(int i=0;i<pattern.size();i++)
            {
                if(mp1.find(word[i])==mp1.end())
                {
                    if(mp2.find(pattern[i])==mp2.end())
                    {
                        mp1[word[i]]=pattern[i];
                        mp2[pattern[i]]=word[i];
                    }
                    else
                    {
                        flag=false;
                        break;
                    }
                }
                else if(pattern[i]!=mp1[word[i]]||word[i]!=mp2[pattern[i]])
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
                ans.push_back(word);
        }
        return ans;
        
    }
};