class Solution {
public:
    int candy(vector<int>& ratings) {
          int sum=0;
        int n=ratings.size();
        vector<int> prefixSum(n,1),suffixSum(n,1);
        for(int i=1;i<n;i++)if(ratings[i]>ratings[i-1]) prefixSum[i]=prefixSum[i-1]+1;
        for(int i=n-2;i>=0;i--) if(ratings[i]>ratings[i+1]) suffixSum[i]=suffixSum[i+1]+1;
        for(int i=0;i<n;i++) sum+=max(prefixSum[i],suffixSum[i]);
        return sum;
    }
};