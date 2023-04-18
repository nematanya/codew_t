class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int i=0,j=0,t=0;
        string res="";
        while(i<w1.size() and j<w2.size())
        {
            if(t%2==0)
            {
                res+=w1[i];
                i++;
                t++;
            }
            else
            {
                res+=w2[j];
                j++;
                t++;
            }
        }
        if(i<w1.size())
        {
            while(i<w1.size())
            {
                res+=w1[i];
                i++;
            }
        }
        if(j<w2.size())
        {
            while(j<w2.size())
            {
                res+=w2[j];
                j++;
            }
        }
        return res;
    }
};