class Solution {
public:
 int n,m;
    vector<vector<int>> ans;
    vector<vector<bool>> pacific,atlantic;
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& h) {
        if(!size(h)) return ans;
        n=h.size(), m=h[0].size();
        pacific =atlantic=vector<vector<bool>> (n, vector<bool>(m, false));
        for(int i=0; i<n;i++){
            dfs(h, pacific, i, 0);
            dfs(h, atlantic, i, m-1);
        }
        for(int j=0; j<m;j++){
            dfs(h, pacific, 0, j);
            dfs(h, atlantic, n-1, j);
        }
        return ans;
    }
    void dfs(vector<vector<int>> &h, vector<vector<bool>> &vis, int i, int j){
        if(vis[i][j]) return;
        vis[i][j]=true;
        if(pacific[i][j] and atlantic[i][j]) ans.push_back({i, j});
        if(i-1>=0 and h[i-1][j]>=h[i][j]) dfs(h, vis, i-1, j);
        if(i+1<n and h[i+1][j]>=h[i][j]) dfs(h, vis, i+1, j);
        if(j-1>=0 and h[i][j-1]>=h[i][j]) dfs(h, vis, i, j-1);
        if(j+1<m and h[i][j+1]>=h[i][j]) dfs(h, vis, i,j+1);
    }
};