class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
      vector<int>dx={-1,0,1,0};
        vector<int>dy={0,1,0,-1};
        queue<pair<int,int>>q;
        int r=grid.size();
        int c= grid[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1)
                    q.push({i,j});
            }
        }
        if(q.size()==r*c) return -1;
        int dis=0;  
        while(q.size())
        {
            int size = q.size();
            dis++;
            while(size--)
            {
                auto [si,sj] = q.front(); q.pop();
                
                for(int i=0 ; i<4; i++)
                {
                    int newi = si + dx[i];
                    int newj = sj + dy[i];
                    if(newi>=0 and newi<r and newj>=0 and newj<c and grid[newi][newj] == 0)
                        q.push({newi,newj}) , grid[newi][newj] = 1;
                }
            }  
        }
        return dis-1;
    }
};