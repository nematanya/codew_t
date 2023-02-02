class Solution {
public:
    bool sol(string a,string b,map<char,int> &mp)
    {
       int i=0;
        while(i<a.size() and i<b.size() and a[i]==b[i]) i++;
        if(i==a.size()) return true;
        else if(i==b.size()) return false;
        else
            return(mp[a[i]]<mp[b[i]]);
    }
    bool isAlienSorted(vector<string>& words, string s) {
        map<char,int>mp;
        for(int i=0;i<s.length();i++)
            mp[s[i]]=i;
        for(int i=0;i<words.size()-1;i++) 
        { 
         if(!sol(words[i],words[i+1],mp))return false;
        }
        return true;
    }
};