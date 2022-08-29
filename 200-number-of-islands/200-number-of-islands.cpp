class Solution {
public:
    void bfs(int row,int col,vector<vector<char>> &grid,vector<vector<int>> &v){
        v[row][col]=1;
        queue<pair<int,int>> q;
        int n = grid.size();
        int m = grid[0].size();
        q.push({row,col});
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for(int del_row=-1;del_row<=1;del_row++){
            for(int del_col=-1;del_col<=1;del_col++){
 if((del_row==-1&&del_col==-1) || (del_row==-1&&del_col==1) || (del_row==1&&del_col==-1) || (del_row==1&&del_col==1)){
                        continue;
                    }
                    int nrow=row+del_row;
                    int ncol=col+del_col;
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1' && !v[nrow][ncol]){
                        v[nrow][ncol]=1;
                        q.push({nrow,ncol});
                    }
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int ans=0;
        vector<vector<int>> v(r,vector<int>(c,0));
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(!v[i][j] and grid[i][j]=='1')
                {
                    ans++;
                    bfs(i,j,grid,v);
                    
                }
            }
        }
        return ans;
    }
};