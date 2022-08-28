class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        unordered_map<int,vector<int>> mp;
        int r=mat.size();
        int c=mat[0].size();
            vector<vector<int>> ans(r,vector<int>(c));
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                mp[i-j].push_back(mat[i][j]);
            }
        }
        for(auto &it:mp)
        {
            sort(it.second.begin(),it.second.end());
           
        }
         for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {   vector<int> temp=mp[i-j];
         
                ans[i][j]=temp[0];
                mp[i-j].erase(mp[i-j].begin());
            }
        }
        return ans;
    }
};