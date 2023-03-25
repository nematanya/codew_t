class Solution {
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        vector<int>comp;
        long long res=0;
        vector<bool>vis(n,0);
        int size=edges.size();
        for(int i=0;i<size;i++)
        {
         adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
        }
     
        for(int i=0;i<n;i++)
        {
            if(vis[i]!=1){
               queue<int>q;
             q.push(i);
                vis[i]=1;
                int c=0;
        while(!q.empty())
        {
         int t=q.front();
            q.pop();
            c++;
            for(auto it:adj[t])
            { 
                if(vis[it]==0)
                { 
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
       comp.push_back(c);
            }
        }
        if(comp.size()==1) return 0;
    long long sum=0;
        for(int i=0;i<comp.size();i++)
        {  cout<<comp[i]<<" ";
            res+=sum*comp[i];
            sum+=comp[i];
        }
        return res;
        }
};