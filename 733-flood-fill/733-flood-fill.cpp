class Solution {
public:
   void dfs(vector<vector<int>>& arr, int r, int c, int color,int val)
    {   
        if(r<0 or c<0 or r>=arr.size() or c>= arr[0].size() or arr[r][c]!=val or arr[r][c]==color  )
        return;
       arr[r][c]=color;
       dfs(arr,r-1,c,color,val);
       dfs(arr,r,c-1,color,val);
       dfs(arr,r+1,c,color,val);
       dfs(arr,r,c+1,color,val);
       }
        
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
  int val=image[sr][sc];
        dfs(image,sr,sc,color,val);
        return image;
    }
};