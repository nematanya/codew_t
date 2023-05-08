class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int i=0;
        int res=0;
        int t=mat.size();
        while(i<t)
        {
            if(mat[i][i]!=101)
            {
                res+=mat[i][i];
                mat[i][i]=101;
            }
            i++;
        }
        i=t-1;
        int j=0;
        while(j<t)
        {
          if(mat[j][i]!=101)
            { 
                res+=mat[j][i];
                mat[j][i]=101;
            }   
            j++;
            i--;
        }
        return res;
    }
};