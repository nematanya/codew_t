//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void bfs(int r,int c,vector<vector<int>> &vis,vector<vector<char>>& grid)
    {
        vis[r][c]=1;
        queue<pair<int,int>>q;
        q.push({r,c});
        int n=grid.size();
        int m=grid[0].size();
        while(!q.empty())
        {
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(int dr=1;dr>-2;dr--)
            {
                for(int dc=1;dc>-2;dc--)
                {
                    int newrow=row+dr;
                    int newcol=col+dc;
                    if(newrow>=0 and newrow<n and newcol>=0 and newcol<m and grid[newrow][newcol]=='1'  and !vis[newrow][newcol])
                    
                    {
                        vis[newrow][newcol]=1;
                        q.push({newrow,newcol});
    
                    }
                }
            }
            
            
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int r=grid.size();
        int c=grid[0].size();
        vector<vector<int>>vis(r,vector<int>(c,0));
        int ans=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(!vis[i][j] and grid[i][j]=='1')
                {
                    ans++;
                    bfs(i,j,vis,grid);
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends