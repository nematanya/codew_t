//in this we don't have to check every string , we just need to compare if all the substring are present or not, so we will just store all the unique substrings and then compare the size 
//queslink-https://leetcode.com/problems/check-if-a-string-contains-all-binary-codes-of-size-k/

class Solution {
public:

    bool hasAllCodes(string s, int k) {
   if(s.length()<k) return false;
       set<string> res;
        for(int i=0;i<=(s.length()-k);i++)
        { string str=s.substr(i,k);
             res.insert(str);}
    int n=pow(2,k);
        // cout<<n;
        // cout<<res.size();
        if(res.size()==n)
            return true;
        else
            return false;
    
    }
    
};