//find the missing no. from vector 
//we can achieve this by xoring elements of vector by ans,and xoring ans  from 1 to n(size of vector),then all the repeated elements will result into zero and the only element which is not included in vector will xor with zero and result will be the no. itself
//question link :-https://leetcode.com/problems/missing-number/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0,i=1;
        for(auto it:nums)
        {            ans^=it;
            ans^=i;
         i++;
    }
        return ans;
    }
};
