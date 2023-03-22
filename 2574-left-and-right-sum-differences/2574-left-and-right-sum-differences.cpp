class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int n=nums.size();
     vector<int>pre(n);   
        pre[0]=0;
        vector<int>suf(n);
        suf[n-1]=0;
        vector<int>ans(n);
        for(int i=1;i<n;i++)
            pre[i]=pre[i-1]+nums[i-1];
        for(int i=n-2;i>=0;i--)
        suf[i]=suf[i+1]+nums[i+1];
        for(int i=0;i<n;i++)
            ans[i]=abs(pre[i]-suf[i]);
        return ans;
    }
};