class Solution {
public:
     void sol(int n,vector<int> adj[],vector<int>&vis,vector<int>&dfs)
    {
    vis[n]=1;
    dfs.push_back(n);
    for(auto it:adj[n])
    {   if(vis[it]==0){
        sol(it,adj,vis,dfs);
        vis[it]=1;
    }
    }
    }
    int findCircleNum(vector<vector<int>>& adj) {
        int v=adj.size();
         vector<int>adjls[v];
        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            {
                if(adj[i][j]==1 and i !=j)
                {
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }
        int ans=0;
        vector<int>vis(v,0);
        vector<int> dfs;
        for(int i=0;i<v;i++)
        {
            if(vis[i]==0)
            {
                ans++;
                sol(i,adjls,vis,dfs);
            }
        }
        return ans;
    }
};