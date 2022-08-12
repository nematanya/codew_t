class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> v;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                    v.push_back({i,j});
            }
        }
        for(auto it:v)
        {
           int k=it.first;
                for(int l=0;l<matrix[0].size();l++)
                    matrix[k][l]=0;
            int j=it.second;
                for(int l=0;l<matrix.size();l++)
                    matrix[l][j]=0;
            
        }
    }
};