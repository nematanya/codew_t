class Solution {
public:
    int concatenatedBinary(int n) {
        long mod = 1E9+7;
        long ans = 0;
        for(int i=1, pow=1; i<=n; i++){
            if(i>=pow) pow *=2;
            ans = ans * pow + i;
            ans = ans % mod;
        }
        return ans;
    }
};