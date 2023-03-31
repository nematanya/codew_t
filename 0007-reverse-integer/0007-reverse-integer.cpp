class Solution {
public:
    int reverse(int x) {
         long long ans=0;
         int temp=x;
         x=abs(x);
        while(x)
        {
         ans=10*ans+x%10;
         if(ans>INT_MAX or ans<INT_MIN) return 0;
        x=x/10;
        }  
        if(temp<0) return -ans;
            return ans;
    }
};