class Solution {
public:
    int percentageLetter(string s, char letter) {
        unordered_map<char,int>m;

        for(int i=0;i<s.size();i++)
            m[s[i]]++;
        
        return (1.0*m[letter]/s.size())*100;
    }
};