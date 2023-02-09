class Solution {
public:
    void dfs(int i,int j,int old,int newc,vector<vector<int>>& image,vector<vector<int>>& ans,int cr[],int cc[])
    {  int n=ans.size(),m=ans[0].size();
      ans[i][j]=newc;
        for(int k=0;k<4;k++)
        {
         int row=i+cr[k];
            int col=j+cc[k];
            if(row>=0 and row<n and col>=0 and col<m and ans[row][col]!=newc and image[row][col]==old)
            {
                dfs(row,col,old,newc,image,ans,cr,cc);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>>ans=image;
        int cr[4]={-1,0,1,0};
        int cc[4]={0,1,0,-1};
        int old=image[sr][sc];
        dfs(sr,sc,old,color,image,ans,cr,cc);
        return ans;
    }
};