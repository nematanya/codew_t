class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
     int i=0,j=0,res=INT_MAX,sum=0,n=nums.size();
        while(j<n)
        { 
            sum+=nums[j];
            
            while(i<=j and sum>=k)
            {  res=min(res,j-i+1); 
                sum-=nums[i];
              i++;
            }
            j++;
        }
        if(res==INT_MAX) return 0;
        return res;
    }
};