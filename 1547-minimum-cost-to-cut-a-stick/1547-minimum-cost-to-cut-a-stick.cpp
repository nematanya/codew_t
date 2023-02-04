class Solution {
public:
    int sol(int i,int j, vector<int> &cuts,vector<vector<int>>&dp)
    {
        if(i>j) return 0; 
        int mini=INT_MAX;
        if(dp[i][j]!=-1) return dp[i][j];
        for(int k=i;k<=j;k++)
        {
     int cost=(cuts[j+1]-cuts[i-1])+sol(i,k-1,cuts,dp)+sol(k+1,j,cuts,dp);
      mini=min(cost,mini);
        }
        return dp[i][j]= mini;
    } 
    int minCost(int n, vector<int>& cuts) {
         int t=cuts.size();
     vector<vector<int>>dp(t+3,vector<int>(t+3,-1));
        cuts.push_back(n);
        cuts.insert(cuts.begin(),0);
        sort(cuts.begin(),cuts.end());
          
    return sol(1,t,cuts,dp);
    }
};