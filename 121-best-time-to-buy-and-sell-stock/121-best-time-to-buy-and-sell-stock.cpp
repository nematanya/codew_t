class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int mini=prices[0];
        int ans=INT_MIN;
        for(auto i:prices)
            { mini=min(mini,i);
             ans=max(ans,i-mini);
        }
    return ans;}
};