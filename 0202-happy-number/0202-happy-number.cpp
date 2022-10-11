class Solution {
public:
    bool isHappy(int n) {
        while(n!=1)
        {   int t=n;
         int sum=0;
         while(t){
            int r=t%10;
            t=t/10;
            sum+=r*r;
         }
            if(sum!=1 and sum%10==sum and sum!=7 and sum!=6) return false;
         n=sum;
        }
    return true;
    }
};