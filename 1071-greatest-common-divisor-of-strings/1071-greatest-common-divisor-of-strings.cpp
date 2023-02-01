class Solution {
public:
    string gcdOfStrings(string s, string t) {
   if(s + t == t + s){
            return s.substr(0, gcd(s.length(), t.length()));
        }
        return "";}
};