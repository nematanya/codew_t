class Solution {
public:
    int addDigits(int num) {
        int res=0;
        while(!(num>=0 and num<=9))
        {  res=0;
            int temp=num;
            while(temp)
            {
                res+=temp%10;
                temp=temp/10;
            }
            num=res;
        }
        return num;
    }
};