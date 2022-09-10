class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int mini=prices[0];
        int ans=INT_MIN;
for(int i=0;i<prices.size();i++)
{  mini=min(mini,prices[i]);
   int cost=prices[i]-mini;
    ans=max(ans,cost);
   
}
        
    return ans;}
};