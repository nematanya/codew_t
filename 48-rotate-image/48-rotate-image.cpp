class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int  r=n-1,t=0,i=0;
       while(t<r)
        { 
           for(i=0;i<n;i++)
            swap(matrix[t][i],matrix[r][i]);
           t++;
           r--;
        }
           int j=0;
        while(j<n-1)
        {

      for(int i=j+1;i<n;i++)
        {
       swap(matrix[j][i],matrix[i][j]);
     
            }
            j++;
        }
    }
};