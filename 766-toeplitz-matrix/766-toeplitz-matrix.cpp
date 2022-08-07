class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int r=matrix.size();
map<int,int> mp;
        int c=matrix[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(mp.find(i-j)==mp.end())
                mp[i-j]=matrix[i][j];
                else
                {
                    if(mp[i-j] !=matrix[i][j]) return false;
                }
            }
        }
    return true;
    }
};