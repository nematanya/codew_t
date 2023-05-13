class Solution {
public:

         int mod = 1e9 + 7;
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int> dp(high + 1, 0);
        dp[0] = 1;
        for(int i = 0; i < high; i++) {
            if(i + one <= high)
                dp[i + one] = (dp[i + one] + dp[i]) % mod;
            if(i + zero <= high)
                dp[i + zero] = (dp[i + zero] + dp[i]) % mod;
        }        
        int sum = 0;
        for(int i = low; i <= high; i++)
            sum = (sum + dp[i]) % mod;
        return sum;
    }
};