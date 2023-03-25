class Solution {
public:
    int minCapability(vector<int>& nums, int k) {
        int s=1,e=1e9;
        int mid;
        int n=nums.size();
        while(s<=e)
        {
            mid=(e-s)/2+s;
             int i=0;
            int count=0;
            while(i<n)
            {
                if(nums[i]<=mid)
                {
                    count++;
                    i+=2;
                }
                else
                    i++;
            }
            if(count>=k) 
                e=mid-1;
            else
                s=mid+1;
        }
        return s;
    }
};