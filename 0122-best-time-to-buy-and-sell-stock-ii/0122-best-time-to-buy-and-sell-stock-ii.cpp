class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> front(2,0);
        vector<int> prev(2,0);
        front[0]=front[1]=0;
        for(int i=n-1;i>=0;i--)
        {
            for(int j=1;j>=0;j--)
            { int profit;
                if(j)
                    profit=max(-prices[i]+front[0],front[1]);
                else
                     profit=max(+prices[i]+front[1],front[0]);
                prev[j]=profit;
            }
            front =prev;
        }
        return prev[1];
    }
};