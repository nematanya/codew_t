class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        vector<int> v(26,0);
        for(int i=0;i<s.length();i++)
            v[s[i]-'a']++;
       string res="";
        for(int i=25;i>=0;i--)
        {
         int count=0;
            while(v[i]!=0)
            {
                if(count==repeatLimit)
                {
                    int j=i-1;
                    while(j>=0 and v[j]==0)
                        j--;
                    if(j==-1) break;
                    else{ res+=('a'+j);
                    v[j]--;
                    count=0;}
                }
                
                res+=('a'+i);
                    v[i]--;
                    count++;}
            }
        
        
        return res;
    }
};