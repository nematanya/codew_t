class Solution {
public:
    bool isPowerOfThree(int n) {
   if(n<1) return false;
    int i;
        for(i=n;i!=1;i=i/3) if(i%3!=0) return false;
        return (i==1);
    }
};