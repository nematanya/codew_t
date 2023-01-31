class Solution {
public:
    int bestTeamScore(vector<int>& s, vector<int>& a) {
        vector<pair<int,int>> v;
        int n=a.size();
        vector<int> dp(n);
        for(int i=0;i<n;i++)
            v.push_back({a[i],s[i]});
        sort(v.begin(),v.end());
        int num=v.size();
        int ans=INT_MIN;
        for(int i=0;i<num;i++)
        {  dp[i]=v[i].second;
            for(int j=0;j<i;j++)
            {
                if(v[j].second<=v[i].second)
                {   
                    dp[i]=max(dp[i],v[i].second+dp[j]);
                }
            }
         ans=max(ans,dp[i]);
        }
        return ans;
            
    }
};