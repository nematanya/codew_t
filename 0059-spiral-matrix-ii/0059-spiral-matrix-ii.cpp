class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int l=0,r=n-1,t=0,b=n-1,dir=0,num=1;
        vector<vector<int>>ans(n,vector<int>(n,0));
        while(t<=b and l<=r)
        {
            if(dir==0)
            {
                for(int i=l;i<=r;i++)
                { ans[l][i]=num;
                 num++;
            }
                t++;
            }
             if(dir==1)
            {
                for(int i=t;i<=b;i++)
                { ans[i][r]=num;
                 num++;
            }
                r--;
            }
             if(dir==2)
            {
                for(int i=r;i>=l;i--)
                { ans[b][i]=num;
                 num++;
            }
                b--;
            }
             if(dir==3)
            {
                for(int i=b;i>=t;i--)
                { ans[i][l]=num;
                 num++;
            }
                l++;
            }
            dir=(dir+1)%4;
        }
        return ans;
    }
};