class Solution {
public:
    int sol(vector<vector<int>>&adj,vector<bool>&vis,int i)
    {
        int change=0;
        vis[i]=1;
        for(auto it:adj[i])
        {
            if(vis[abs(it)]==0)
                change+=sol(adj,vis,abs(it))+(it>0);
        }
        return change;
    }
    int minReorder(int n, vector<vector<int>>& c) {
        vector<vector<int>>adj(n);
        for(int i=0;i<c.size();i++)
        {
            adj[c[i][0]].push_back(c[i][1]);
            adj[c[i][1]].push_back(-c[i][0]);
        }   
        vector<bool>vis(n,0);
        int res=0;
        // return sol(adj,vis,0);
        queue<int>q;
        q.push(0);
        while(!q.empty()){
            int t=q.front();
            q.pop();
            if(vis[abs(t)]==1) continue;
            vis[abs(t)]=1;
        for(auto k:adj[abs(t)])
        {  
         if(vis[abs(k)]==1) continue;
                if(k>0) res++;
                q.push(abs(k));}
            
            }
         return (res);
    }
};