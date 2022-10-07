class Solution {
public:
    void sol(int o,int c,vector<string> &ans,string s)
    {
        if(o==0 and c==0 ) {ans.push_back(s); return;}
        if(o<0 and c>0 ) return;
        if(o>c) return;
        sol(o-1,c,ans,s+'(');
        sol(o,c-1,ans,s+')');
    }
    vector<string> generateParenthesis(int n) {
       vector<string> ans;
        sol(n,n,ans,"");
        return ans;
    }
};