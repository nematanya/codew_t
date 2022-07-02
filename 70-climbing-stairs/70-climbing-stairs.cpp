class Solution {
public:
   
    int climbStairs(int n) {
         //recursive approach giving TLE
    //     if(n==0) return 1;
    //     if(n==-1) return 0;
    //     int res= climbStairs(n-1)+ climbStairs(n-2);
    //  return res ;   
    // 
 
    int a = 1, b = 1;
    while (--n)
        a = (b += a) - a; // b is +=a(old one) and a is a+b 
    return b;
}
};