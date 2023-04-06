class Solution {
public:
    int dx[4]={0,+1,0,-1};
        int dy[4]={+1,0,-1,0};
    bool dfs(int i,int j,int m,int n ,vector<vector<int>>& grid)
    {
        if(i<0 or j<0 or i>=m or j>=n ) return false;
        if(grid[i][j]==1) return true;
        grid[i][j]=1;

             bool d1 = dfs(i+1, j,m,n,grid);
        bool d2 = dfs( i, j+1,m,n,grid);
        bool d3 = dfs( i-1, j,m,n,grid);
        bool d4 = dfs( i, j-1,m,n,grid);
        return d1 && d2 && d3 && d4;
    }
    int closedIsland(vector<vector<int>>& grid) {
    int m=grid.size(),n=grid[0].size();
        int ans=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==0 ) 
                {
                    if(dfs(i,j,m,n,grid))
                        ans++;
                }
                    
            }
        }
        return ans;
    }
};