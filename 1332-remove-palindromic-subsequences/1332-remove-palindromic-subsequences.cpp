class Solution {
public:
    bool ispal(string t)
    {
        string rev=t;
        reverse(rev.begin(),rev.end());
        if(rev==t) return true;
        else return false;
    }
    int removePalindromeSub(string s) {
     if(s.length()==0) return 0;
        else if(ispal(s)) return 1;
        else return 2;
    }
};