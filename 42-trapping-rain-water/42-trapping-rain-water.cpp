class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> maxl(n,height[0]);
        vector<int> maxr(n,height[n-1]);
        for(int i=1;i<n;i++)
            maxl[i]=max(maxl[i-1],height[i]);
         for(int i=n-2;i>=0;i--)
            maxr[i]=max(maxr[i+1],height[i]);
        vector<int> res(n);
         for(int i=0;i<n;i++)
            res[i]=min(maxl[i],maxr[i])-height[i];
        int sum=0;
        for(auto it:res)
            sum+=it;
        return sum;
    }
};