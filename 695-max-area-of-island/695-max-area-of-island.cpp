class Solution {
public:
int sol(vector<vector<int>>& grid,int r,int c){
        if(r<0 or c<0 or r==grid.size() or c==grid[r].size() or grid[r][c]==0) return 0;
        grid[r][c]=0;
        return 1 + sol(grid,r-1,c)+sol(grid,r,c+1)+sol(grid,r+1,c)+sol(grid,r,c-1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0; i<grid.size(); ++i)
            for(int j=0; j<grid[i].size(); ++j)
            { if(grid[i][j])
             ans = max(ans,sol(grid, i, j));
            }
        return ans;
    }
};