class Solution {
public:
    int countVowelPermutation(int n) {
          int MOD = 1e9 + 7;
        int a = 1, e = 1, i = 1, o = 1, u = 1;
        
        for(int k = 2; k <= n; k++) {
            int temp_a = a;
            int temp_e = e;
            int temp_i = i;
            int temp_o = o;
            int temp_u = u;
            
            a = (temp_e + (temp_i + temp_u) % MOD) % MOD;
            e = (temp_a + temp_i) % MOD;
            i = (temp_e + temp_o) % MOD;
            o = temp_i;
            u = (temp_i + temp_o) % MOD;
        }
        
        return (a + (e + (i + (o + u) % MOD) % MOD) % MOD) % MOD;
    }
};