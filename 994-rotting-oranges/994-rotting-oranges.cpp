class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        int r=grid.size(),c=grid[0].size(),tot=0,days=0,rot=0;
     queue<pair<int,int>> q;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]!=0) tot++;
                if(grid[i][j]==2) q.push({i,j});
            }}
       int dx[4] = {0, 0, 1, -1};
        int dy[4] = {1, -1, 0, 0};
        while(q.empty()==false)
        {
         int k=q.size();
            rot+=k;
            while(k--){
            int x=q.front().first,y=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx<0 or ny<0 or nx>=r or ny>=c or grid[nx][ny]!=1) continue;
                q.push({nx,ny});
                grid[nx][ny]=2;
            }
            }
               if(!q.empty()) days++;
            }
        if(rot==tot) return days;
        else return -1;
    }
};