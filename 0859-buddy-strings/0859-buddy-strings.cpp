class Solution {
public:
    bool buddyStrings(string s, string goal) {
         if(s.length() != goal.length()) return false;
        int freq[26] = {0}, freqS[26] = {0};
        int c = 0;
        bool flag = false;
        for(int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
            freq[goal[i] - 'a']--;
            freqS[s[i] - 'a']++;
            if(freqS[s[i] - 'a'] == 2) flag = true;
            if(s[i] != goal[i]) 
                c++;
        }
        for(int i = 0; i < 26; i++) {
            if(freq[i]) return false;
        }
        if(s == goal) {
            return flag;
        }
        return c == 2;
    }
};