//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
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


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends