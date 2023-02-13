class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
       int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        vector<vector<int>> ans(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    vis[i][j]=1;
                    q.push({{i,j},0});
                    
                }
            }
        }
        int dx[4]={-1,0,+1,0};
        int dy[4]={0,1,0,-1};
        while(!q.empty())
        {
            int r=q.front().first.first;
            int c=q.front().first.second;
            int dis=q.front().second;
            ans[r][c]=dis;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int row=r+dx[i];
                int col=c+dy[i];
               if(row>=0 and row<n and col>=0 and col<m and vis[row][col]==0)
               {
                   vis[row][col]=1;
                   q.push({{row,col},dis+1});
               }
            }
            
        }
        return ans;
    }
};