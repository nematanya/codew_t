class Solution {
public:
    void dfs(int i,int j,  vector<vector<int>>&vis,vector<vector<char>>& board,vector<int> &dx, vector<int>&dy)
    {
        int n=board.size();
        int m=board[0].size();
        vis[i][j]=1;
        for(int t=0;t<4;t++)
        {
            int row=i+dx[t];
            int col=j+dy[t];
            if(row>=0 and row<n and col>=0 and col<m and !vis[row][col] and board[row][col]=='O')
            {
                dfs(row,col,vis,board,dx,dy);
            }
        }
        
    }
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<int>dx={-1,0,1,0};
        vector<int>dy={0,1,0,-1};
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            if(!vis[i][0] and board[i][0]=='O')
                dfs(i,0,vis,board,dx,dy);
                if(!vis[i][m-1] and board[i][m-1]=='O')
                    dfs(i,m-1,vis,board,dx,dy);
            
        }
        for(int i=0;i<m;i++)
        {
                        if(!vis[0][i] and board[0][i]=='O')
                dfs(0,i,vis,board,dx,dy);
                if(!vis[n-1][i] and board[n-1][i]=='O')
                    dfs(n-1,i,vis,board,dx,dy);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]!=1 and board[i][j]=='O')
                    board[i][j]='X';
            }
        }
    }
};