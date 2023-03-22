class Solution {
public:
    void dfs(vector<pair<int,int>> adjacent[], vector<int>&v, int &ans, int t)
    {
        if(v[t]==1) return;
        v[t]=1;
        for(auto it:adjacent[t])
        {
            ans = min(ans,it.second);
            dfs(adjacent,v,ans,it.first);
        }
        return;
    }
    int minScore(int n, vector<vector<int>>& roads)
    {
        int sizee= roads.size();
        vector<pair<int,int>>adjacent[n+1];
        for(int i=0;i<sizee;i++)
        {
            int a = roads[i][0];
            int b = roads[i][1];
            int c = roads[i][2]; 
            adjacent[a].push_back({b,c});
            adjacent[b].push_back({a,c});
        }
        vector<int>visited(n+1,0);
        int ans=INT_MAX;
        dfs(adjacent,visited,ans,1);
        return ans;
    }
};