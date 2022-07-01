class Solution {
public:
    
        double myPow(double x, int n) {
        if (n<0) return Pow((1/x),n);
        return Pow(x,n);
    }
    double Pow(double x, int n) {
        if (n == 0) return 1;
        double half = Pow(x, n/2);
        half *= half;
        if (n & 1)  half *= x;
        return half;
    }
};