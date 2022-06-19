class Solution {
public:
    string greatestLetter(string s) {
        string t="";
        int C[26]={};
        int S[26]={};
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='A' and s[i]<='Z')
                C[s[i]-'A']++;
            if(s[i]>='a' and s[i]<='z') 
                  S[s[i]-'a']++;
        }
        for(int i=25;i>=0;i--)
        {  
            if(C[i]>0 and S[i]>0){
                t+= char('A'+ i);
            return t;}
        }
        return t;
    }
};