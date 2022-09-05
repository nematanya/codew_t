class Solution {
public:
    int f(vector<vector<int>>& mat, string t)
    {int r=mat.size();
     int ans=0;
    int c=mat[0].size();
     for(int i=0;i<r;i++)
     {
         for(int j=0;j<c;j++)
         {
             if(t[j]=='0' and mat[i][j]==1  )
                 break;
             if(j==c-1) 
                 ans++;
         }
     }
     return ans;
    }
    int maximumRows(vector<vector<int>>& mat, int cols) {
        int m=mat[0].size();
       string t(m,'0');
        for(int i=m-1;i>=m-cols;i--) 
            t[i]='1';
        int res=0;
        do{
            res=max(res,f(mat,t));
        }while(next_permutation(t.begin(),t.end()));
    return res;
    }
    
};