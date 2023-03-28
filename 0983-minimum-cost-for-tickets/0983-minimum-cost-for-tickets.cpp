class Solution {
public:
    int sol(vector<int>& days, vector<int>& costs,int i,vector<int>&dp)
    {
        int n=days.size();
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        int day=costs[0]+sol(days,costs,i+1,dp);
        int t;
        for(t=i;t<n and (days[t]<days[i]+7);t++);
        int week=costs[1]+sol(days,costs,t,dp);
        for(t=i;t<n and days[t]<days[i]+30;t++);
        int month=costs[2]+sol(days,costs,t,dp);
        return dp[i]=min(day,min(week,month));
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int>dp(366,-1);
        return sol(days,costs,0,dp);
    }
};