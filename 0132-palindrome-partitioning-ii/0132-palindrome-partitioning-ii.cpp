class Solution {
public:
    bool ispal(int i,int j,string &s)
    {
        while(i<j)
        {
            if(s[i]!=s[j]) return false;
            i++;j--;
        }
        return true;
    }
    int sol(int i,int n, string &s,vector<int>& dp)
    {
        if(i==n) return 0;
        int mini=INT_MAX;
        if(dp[i]!=-1)
            return dp[i];
        for(int j=i;j<n;j++)
        {
            if(ispal(i,j,s))
            {
                int cost=1+sol(j+1,n,s,dp);
                mini=min(mini,cost);
            }
        }
        return dp[i]=mini;
    }
    int minCut(string s) {
        int n=s.size();
        vector<int>dp(n,-1);
      return sol(0,n,s,dp)-1;  
    }
};