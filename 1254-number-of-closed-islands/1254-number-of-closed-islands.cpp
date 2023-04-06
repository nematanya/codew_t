class Solution {
public:
    int dx[4]={0,+1,0,-1};
        int dy[4]={+1,0,-1,0};
    bool dfs(int i,int j,int m,int n ,vector<vector<int>>& grid)
    {
        if(i<0 or j<0 or i>=m or j>=n ) return false;
        if(grid[i][j]==1) return true;
        grid[i][j]=1;
        bool flag=true;
        for(int p=0;p<4;p++)
        {
            
                int nx=i+dx[p];
                int ny=j+dy[p];
                flag&=dfs(nx,ny,m,n,grid);
        }
        return flag;
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