class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> freq(26,0);
        vector<string> v;
          for(auto j:words2)
        {     vector<int> temp(26,0);
            for(auto t:j){
          temp[t-'a']++;
               freq[t-'a']=max(freq[t-'a'],temp[t-'a']); 
            }
        }
        for(auto it: words1)
        {
             vector<int> temp(26,0);
            for(auto irr:it)
            temp[irr-'a']++;
            bool flag=true;
            for(int i=0;i<26;i++)
            {
                if(freq[i]>temp[i])
                {flag=false;
                break;}
                
            }
            if(flag)
                v.push_back(it);
        }
        return v;
    }
};