class Solution {
public:
    void dfs(vector<pair<int,int>> adj[],vector<bool> &v,int &ans,int c)
    {
        if(v[c]==1)return;
        v[c]=1;
        for(auto it:adj[c])
        {
            ans=min(ans,it.second);
            dfs(adj,v,ans,it.first);
        }
        return;
    }
    int minScore(int n, vector<vector<int>>& roads) {
        vector<pair<int,int>>adj[n+1];
        vector<bool>vis(n+1,0);
        int ans=INT_MAX;
        for(int i=0;i<roads.size();i++)
        {
            int a=roads[i][0];
            int b=roads[i][1];
            int c=roads[i][2];
            adj[a].push_back({b,c});
            adj[b].push_back({a,c});
        }
        dfs(adj,vis,ans,1);
        return ans;
        
    }
};