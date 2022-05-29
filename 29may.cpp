
//question link -https://leetcode.com/problems/maximum-product-of-word-lengths/
//not an opt. //

class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n=words.size(),ans=0;
        vector<vector<int>> v(n,vector<int>(26, 0));
        for(int i=0;i<n;i++)
            
        {
            for(int j=0;j<words[i].length();j++)
                v[i][words[i][j]-'a']++; //ith index vector will store count of alphabets
            
    }
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                bool same=0;
                for(int k=0;k<26;k++)
                {
                    if(v[i][k] !=0 && v[j][k]!=0) //comparing each alphabet from a to z 
                    {  
                         same=1;
                        break;
                    }
                }
                if(same==0)
                { int len=(words[i].size())*(words[j].size());
                    ans=max(ans,len);
                }
            }
        }
  
                            return  ans;}
};