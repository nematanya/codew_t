class Solution {
public:
    int percentageLetter(string s, char letter) {
        unordered_map<char,int>m;
float ans;
        for(int i=0;i<s.size();i++)
            m[s[i]]++;
        
        cout<<m[letter]/(float)s.length();
        ans=(1.0*m[letter]/s.size())*100;
        return ans;
    }
};