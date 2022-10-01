class Solution {
public:
int decode(int i, string s, vector<int> &dp){
    if(s[i]=='0'){
        return 0;
    }
    if(i>=s.size()){
        return 1;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    int ans1=decode(i+1, s, dp);
    int ans2=0;
    if(i<s.size()-1 && (s[i]=='1' || s[i]=='2' && s[i+1]<='6')){
        ans2+=decode(i+2, s, dp);
    }
    return dp[i]=ans1+ans2;
}
    int numDecodings(string s) {
        vector<int>dp(s.size()+1, -1);
        return decode(0, s, dp);
    }
};