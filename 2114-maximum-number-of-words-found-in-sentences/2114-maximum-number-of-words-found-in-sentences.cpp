class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count,ans=INT_MIN;
        for(auto it: sentences)
        {  count=0;
            stringstream s(it);
            string word;
            while(s>>word)
                count++;
         ans=max(ans,count);
         
        }
        return ans;
    }
};