class Solution {
public:
    int ans;
    void sol(vector<int> &cook,int i, vector<int>&c)
    { int k=c.size();
        if(i==cook.size())
        {
            int temp=INT_MIN;
            for(int j=0;j<k;j++)
            {
                temp=max(c[j],temp);
            }
            ans=min(ans,temp);
            return;
        }
        for(int j=0;j<k;j++)
        {
            c[j]+=cook[i];
            sol(cook,i+1,c);
            c[j]-=cook[i];
        }
    }
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int>c(k,0);
        ans=INT_MAX;
        sol(cookies,0,c);
        return ans;
        
    }
};