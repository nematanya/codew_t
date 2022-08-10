class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
vector<int> v(60,0);
        int ans=0;
        for(auto it:time)
        {
            int rem=it%60;
            if(rem==0)
                ans+=v[0];
            else
              ans+=v[60-rem];
            v[rem]++;
            }
        
        return ans;
    }
};