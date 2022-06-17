class Solution {
public:
    bool isPerfectSquare(int num) {
        int x= sqrt(num);
        if(x*x==num) return true;
        else return false;
    }
};