class Solution {
public:
    int minFlips(int a, int b, int c) {
          int ans=0;
        for(long i=0;i<=30;i++){
            int x=a&1;
            int y=b&1;
            int z=c&1;
            if(z==0) {
                ans += x+y;
            }
            else {
                if(x==0 && y==0)ans++;
            }
            a/=2;
            b/=2;
            c/=2;
        }
        return ans;
    }
};