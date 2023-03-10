class Solution {
public:
    int percentageLetter(string s, char letter) {
     vector<int>v(26,0);
        for(int i=0;i<s.length();i++)
        {
            v[s[i]-'a']++;
        } 
        cout<<1.0*v[letter-'a']/s.length();
        return (1.0*v[letter-'a']/s.length())*100;
    }
};